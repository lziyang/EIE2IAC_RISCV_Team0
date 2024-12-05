# reg list：
# a0: current light status（1, 11, 111, ..., 0x1111_1111）
# t0: final light status, 0xFF = 0b1111_1111
# a1: random delay counter for the random delay after all lights are on
# a2: time scale factor to extend cpu timer to real-life time
# a3: rst
# t1: trigger
# t3: random value seed (and random value itself).
# t4: delay counter for 1 sec delay
# t5: seed counter to generate seed
# t6, t2: temp reg

#--------------------------------------------
# _init
#--------------------------------------------

init:
    addi a0, x0, 0          # init light status a0 = 0
    addi t0, x0, 0xFF       # final light status
    addi t3, x0, 0          # random value
    addi t5, x0, 0          # seed counter


    # 触发信号寄存器初始化
    addi t1, x0, 0          # trigger
    
    # 注意，a2 (SCALE) and a3 (rst) 至少部分是由外部因素决定的，特别是rst可能会由某个外部方式来进行输入？暂时留白
    addi a2, x0, 16            # a2 (scale) will be set based on time_scale. For not set it as 16 to simplify testing
    addi a3, x0, 0             # a3 rst is set to 0 as default

#--------------------------------------------
# this is for generation of the random seed for LFSR
#--------------------------------------------

seed_generation:
    # counter from 0x00 to 0xFF
    addi t5, t5, 1          # t5 = t5 + 1
    andi t5, t5, 0xFF       # remain t5 under 0xFF, this essentially serves as a pseudo loop

    # check for trigger
    beq t1, x0, seed_generation  # continue looop if trigger is 0
    addi t1, x0, 0          # set trigger to 0 if trigger is not 0 (wait for next trigger input) Notice glitch here! (if we pressed the trigger during the loop or smthing it will cause the trigger to remain as high. We can refine this later but remain it as this current version to enable easy testing)
    addi t3, t5, 0          # save seed to t3
    jal x0, main            # go to main loop to turn on lights

#--------------------------------------------
# main loop to turn on lights
#--------------------------------------------
main:
    # a0 is the light status
    jal x1, delay           # go to delay function for 1 sec delay
    slli a0, a0, 1          # a0 = a0 << 1
    addi a0, a0, 1          # a0 = a0 + 1. With the line above to form new light status, i.e. 111 -> 1111 -> 11111 etc
    # check for rst (a3)
    bne a3, x0, init        # if rst is not 0, go to init
    bne a0, t0, main        # if a0 (light status) is not yet t0 (0xFF, or 0x1111_1111), continue the main loop
    beq a0, t0, all_lights_on  # once the condition above is satisfied, i.e. all lights are on, go to the all_lights_on function to turn off lights

#--------------------------------------------
# to turn of the lights after random delay
#--------------------------------------------
all_lights_on:
    jal x1, random_delay    # use the random delay func
    addi a0, x0, 0          # turn off all lights, i.e. a0 = 0x00

    jal x0, init            # go back to init

#--------------------------------------------
# delay function (note that we have to set scale to 0)
#--------------------------------------------
delay:
    # scale is in a2
    addi t4, x0, 1         # t4 = 1
    # t4 = t4 * a2 without mul
    # Notice that we can simplify since t4 is 1: t4 = a2 (I think?)
    add t4, x0, a2         # t4 = a2

delay_loop:
    addi t4, t4, -1         # t4 = t4 - 1，counter -= 1

    # check for rst even during the waiting
    bne a3, x0, init        # if rst != 0, go back to init
    bne t4, x0, delay_loop  # if t4 is not 0, continue loop
    ret                     # back to main

#--------------------------------------------
# random delay LFSR
#--------------------------------------------

random_delay:
    srli t2, t3, 1          # t2 = t3 >> 1
    andi t6, t3, 1          # t6 = t3 & 1，get the lowest bit
    xor t2, t2, t6          # t2 = t2 ^ t6，update the random number
    addi t3, t2, 0          # update t3
    andi a1, t2, 0xFF       # a1 = t2 & 0xFF，get the lowest 8 bits

    # Replace mul a1, a1, a2 in the original file (check archive) with a loop
    # Multiply a1 by a2 without using mul, then initialize result to 0
    add t6, x0, x0          # t6 = 0, result
    add t5, a2, x0          # t5 = a2, copy of multiplier

multiply_loop_random_delay:
    beq t5, x0, multiply_end_random_delay   # if t5 == 0, end
    andi t2, t5, 1             # t2 = t5 & 1
    beq t2, x0, skip_add_random_delay       # if t2 == 0, skip addition
    add t6, t6, a1             # t6 += a1
skip_add_random_delay:
    slli a1, a1, 1             # a1 <<= 1
    srli t5, t5, 1             # t5 >>= 1
    jal x0, multiply_loop_random_delay

multiply_end_random_delay:
    add a1, t6, x0             # a1 = result

random_delay_loop:
    addi a1, a1, -1         # a1 = a1 - 1, in other words: random counter -= 1
    # check for rst (a3)
    bne a3, x0, init        # go back to init if rst != 0
    bne a1, x0, random_delay_loop  # if a1 is not zero, continue waiting
    ret                     # go back

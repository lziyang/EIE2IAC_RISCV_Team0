#include "gtest/gtest.h"
#include "Vtwo_waymisscache_ad.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

Vtwo_waymisscache_ad *top;
VerilatedVcdC *tfp;
unsigned int ticks = 0;

class TwoWayMissCacheTest : public ::testing::Test
{
public:
    void SetUp() override
    {
        initializeInputs();
        runReset();
    }

    void TearDown() override{}

    void initializeInputs()
    {
        top->clk = 0;
        top->rst = 0;
        top->MemWriteM = 0;
        top->ALUResultM = 0;
        top->WriteDataM = 0;
        top->Datamem_wire = 0;
        top->MemValid_wire = 0; 
    }

    void runReset()
    {
        top->rst = 1;
        runSimulation();
        top->rst = 0;
    }

    // Runs the simulation for a clock cycle, evaluates the DUT, dumps waveform.
    void runSimulation()
    {
        for (int clk = 0; clk < 2; clk++)
        {
            top->eval();
            tfp->dump(2 * ticks + clk);
            top->clk = !top->clk;
        }
        ticks++;

        if (Verilated::gotFinish())
        {
            exit(0);
        }
    }


    void writeToCache(uint32_t address, uint32_t data){
        top->ALUResultM = address;
        top->WriteDataM = data;
        top->MemWriteM = 1;
        runSimulation();
        top->MemWriteM = 0;
    }

    void readFromCache(uint32_t address, uint2_t &dataout, bool &hit, bool &miss){
        top->ALUResultM = address;
        runSimulation();
        dataout = top->Data;
        hit = top->hit;
        miss = top->miss;
    }
};

TEST_F(TwoWayMissCacheTest, TestCacheHit){
    uint32_t address = 0x2675;
    uint32_t data = 0xBA75;
    uint32_t dataout;
    bool hit, miss;

    writeToCache(address, data);
    readFromCache(address, dataout, hit, miss);
    
    EXPECT_TRUE(hit);
    EXPECT_FALSE(miss);
    EXPECT_EQ(dataout, data)
}

TEST_F(TwoWayMissCacheTest, TestCacheMiss){
    uint32_t address = 0x1273;
    uint32_t dataout;
    bool hit, miss;

    readFromCache(address, dataout, hit, miss);

    EXPECT_TRUE(miss);
    EXPECT_FALSE(hit);
}

TEST_F(TwoWayMissCacheTest, TestWriteBack){
    uint32_t address1 = 0x18B3;
    uint32_t dataout1 = 0x5CA9;
    uint32_t address2 = 0x9FF3;
    uint32_t dataout2 = 0x76DE;

    writeToCache(address1, dataout1);
    writeToCache(address2, dataout2);

    EXPECT_EQ(top->MemWrite_wire, 1);
    EXPECT_EQ(top->MemWriteData_wire, data1);
}

int main(int argc, char **argv)
{
    top = new Vtwo_waymisscache_ad;
    tfp = new VerilatedVcdC;

    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("two_waymisscache_ad.vcd");

    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();

    top->final();
    tfp->close();

    delete top;
    delete tfp;

    return res;
}
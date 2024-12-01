// Converts big endian machine code into small endian and separates bytes with spaces
// Input: Enter big endian machine code into a .txt file "BigEndianProgram.txt" in same dir as this file
// To run: Use command 'g++ MachineCodeConverter.cpp -o /tmp/MachineCodeConverter && /tmp/MachineCodeConverter' in terminal from same dir
// Output: Generated as a "program.hex" file

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

std::string convertToLittleEndian(const std::string &hex)
{
    if (hex.length() != 8)
    {
        throw std::invalid_argument("Invalid hex string length. Must be 8 characters.");
    }

    std::ostringstream littleEndian;
    for (int i = 6; i >= 0; i -= 2)
    {
        littleEndian << hex.substr(i, 2);
        if (i > 0)
            littleEndian << " ";
    }

    return littleEndian.str();
}

int main()
{
    std::ifstream inputFile("BigHexProgram.txt");
    std::ofstream outputFile("program.hex");

    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open input.txt" << std::endl;
        return 1;
    }

    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not open program.hex for writing" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        try
        {
            std::string littleEndian = convertToLittleEndian(line);
            outputFile << littleEndian << "\n";
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error processing line: " << line << " - " << e.what() << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Conversion complete. Results written to program.hex" << std::endl;
    return 0;
}

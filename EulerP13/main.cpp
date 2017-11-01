#include <cstdint>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <unistd.h>

template <typename T> T too_big( const char* num )
{
    std::stringstream ss(num);
    T ret;
    return ss >> ret ? ret : 0;
}

std::string large_sum()
{
    static const char* file_name = "/Users/s521059/CLionProjects/Euler Project/EulerP13/gg.txt";

    uint64_t sum = 0;

    std::ifstream fin(file_name);

    if( !fin.is_open() ){
        std::cerr << "Failed to open file: " << file_name << std::endl;
        return "-1";
    }

    for( std::string line ; std::getline(fin,line);){
       
        sum += too_big<uint64_t>(line.substr(0,11).c_str());
    }
    return std::to_string(sum).substr(0,10);
}


int main(int argc, char const *argv[])
{
    std::cout << "Answer: " << large_sum() << std::endl;
}

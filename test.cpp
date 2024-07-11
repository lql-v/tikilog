#include "log/LogLevel.h"
#include <iostream>
int main()
{
    std::cout <<LogLevel::ToString(LogLevel::DEBUG) <<std::endl;
    std::cout <<LogLevel::ToString(LogLevel::UNKNOWN) <<std::endl;
    std::cout <<LogLevel::ToString(LogLevel::FromString("debug")) <<std::endl;
    return 0;
}

#include "LogLevel.h"
#include <iostream>
#include <string>

const char* LogLevel::ToString(LogLevel::Level level)
{
    switch(level)
    {
#define XX(name) \
    case LogLevel::name : \
        return #name; \
        break;
    XX(DEBUG)
    XX(INFO)
    XX(WARN)
    XX(ERROR)
    XX(FATAL)
#undef XX
    default: 
        return "UNKNOWN";
    }
}

const LogLevel::Level LogLevel::FromString(const std::string&str)
{
#define XX(uplevel, lowlevel) \
    if(str == #lowlevel || str == #uplevel) return LogLevel::uplevel;
    XX(DEBUG, debug)
    XX(INFO, info)
    XX(WARN, warn)
    XX(ERROR, error)
    XX(FATAL, fatal)
#undef XX    
    return LogLevel::UNKNOWN;
}


// 由于确保是常量字符串，两者效率相差不大，编译器可优化，为了保持可读性选用上述内容
// const LogLevel::Level LogLevel::FromString(const char *str)
// {
// #define XX(uplevel, lowlevel) \
//     if(std::strcmp(str, #uplevel) == 0 || std::strcmp(str, #lowlevel) == 0) return LogLevel::uplevel;
//     XX(DEBUG, debug)
//     XX(INFO, info)
//     XX(WARN, warn)
//     XX(ERROR, error)
//     XX(FATAL, fatal)
// #undef XX
//     return LogLevel::UNKNOWN;
// }
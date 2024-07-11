/**
 * @file LogLevel.h
 * @brief 日志等级
 * @date 2024.07.11
 */
#ifndef _LOG_LEVEL_H_
#define _LOG_LEVEL_H_

#include<string>

class LogLevel
{
public:
    enum Level 
    {
        UNKNOWN = 0,
        DEBUG = 1,
        INFO = 2, 
        WARN = 3,
        ERROR = 4,
        FATAL = 5
    };
    /**
     * @brief 把日志级别转换成文本
     * @param[in] level 日志级别
     */
    static const char* ToString(LogLevel::Level level);
    /**
     * @brief 把字符串转换成日志级别
     * @param[in] str 日志级别文本
     */
    static const LogLevel::Level FromString(const std::string&str);
};

#endif //LOG_LEVEL_H_
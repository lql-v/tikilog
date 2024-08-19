/**
* @file LogEvent.h
* @brief 日志事件
* @date 2024.07.11
*/

#ifndef _LOG_EVENT_H_
#define _LOG_EVENT_H_
#include "LogLevel.h"

/**
* @brief 日志事件
*/
class LogEvent
{
public:
    /**
    * @brief 日志事件
    * @param[in]
    */
    LogEvent(,)
private:
    const char *m_file=nullptr;     //文件名
    uint32_t m_line=0;              //行号
    LogLevel::level m_level;        //事件级别
    uint64_t m_time=0;              //时间戳
}

#endif //_LOG_EVENT_H_
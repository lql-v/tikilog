#pragma once

#include "Logger.h"
#include <string>
#include <memory>
#include <map>

class LoggerMgr
{
public:
    Singleton& operator=(const Singleton&) = delete;
    Singleton(const Singleton&) = delete;
    std::shared_ptr<LoggerMgr> getinstance();
private:
    Singleton();
    ~Singleton();
    std::map<std::string, Logger> m_loggerMap;
};
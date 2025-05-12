#ifndef LOG_H
#define LOG_H

enum class LogType{
    MESSAGE,
    WARNING,
    FETAL_ERROR
};

void log_data(const char* message,LogType lt);

#endif
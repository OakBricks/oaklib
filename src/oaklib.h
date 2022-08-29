#ifndef OAKLIB_H
#define OAKLIB_H
#include <stdio.h>
#include "ansicolors.h"

typedef enum {
    INFO,
    WARNING,
    ERROR,
    DEBUG,
    SEVERE_ERROR
} LoggingLevels;

extern void log_err(char* msg);
extern void log_warn(char* msg);
extern void log_debug(char* msg);
extern void log_info(char* msg);
extern void log_severe_err(char* msg);
extern void log(LoggingLevels level, char* msg);

#endif // OAKLIB_H
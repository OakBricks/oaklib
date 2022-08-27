#ifndef OAKLIB_H
#define OAKLIB_H
#include <stdio.h>
#include "ansicolors.h"

extern void log_err(char* msg);
extern void log_warn(char* msg);
extern void log_debug(char* msg);
extern void log_info(char* msg);

#endif // OAKLIB_H
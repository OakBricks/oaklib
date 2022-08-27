#include "oaklib.h"

void log_info(char *msg) {
    printf("%s\n", msg);
}

void log_debug(char *msg) {
    printf("%s%s%s\n", ITALICS, msg, COLOR_RESET);
}

void log_err(char *msg) {
    printf("%s%s%s\n", RED, msg, COLOR_RESET);
}

void log_warn(char *msg) {
    printf("%s%s%s\n", YEL, msg, COLOR_RESET);
}
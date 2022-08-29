#include "oaklib.h"


void log_info(char *msg) {
    printf("%s\n", msg);
}

void log_debug(char *msg) {
    printf("%s%s%s\n", ITALICS, msg, RESET);
}

void log_err(char *msg) {
    printf("%s%s%s\n", RED, msg, RESET);
}

void log_warn(char *msg) {
    printf("%s%s%s\n", YELLOW, msg, RESET);
}

void log_severe_err(char *msg) {
    printf("%s%s%s%s\n", WHITE, RED_BG, msg, RESET);
}

void log(LoggingLevels level, char *msg) {
    if (level == DEBUG) {
        log_debug(msg);
    } else if (level == INFO) {
        log_info(msg);
    } else if (level == WARNING) {
        log_warn(msg);
    } else if (level == ERROR) {
        log_err(msg);
    } else if (level == SEVERE_ERROR) {
        log_severe_err(msg);
    }
}
#include "src/oaklib.h"
#include <oaklib/oaklib.h>

int main(void) {
    log_err("error");
    log_debug("debug");
    log_info("info");
    log_warn("warning");
    log_severe_err("severe");
    return 0;
}
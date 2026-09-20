#include "usmp_core.h"

const char* usmp_core_get_version(void) {
    return "0.1.1-core";
}

int usmp_core_calculate_checksum(const unsigned char *data, int len) {
    int sum = 0;
    if (!data || len <= 0) {
        return 0;
    }
    for (int i = 0; i < len; i++) {
        sum = (sum * 31) + data[i];
    }
    return sum;
}

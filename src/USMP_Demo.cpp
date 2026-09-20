#include "USMP_Demo.h"

#if __has_include("core/usmp_core.h")
  #include "core/usmp_core.h"
#elif __has_include("../../core/include/usmp_core.h")
  #include "../../core/include/usmp_core.h"
#endif

USMP_Demo::USMP_Demo() {}

bool USMP_Demo::begin() {
    return true;
}

String USMP_Demo::getVersion() {
#if defined(USMP_CORE_H)
    return String("USMP_Demo v0.1.1 (Core: ") + usmp_core_get_version() + ")";
#else
    return "USMP_Demo v0.1.1";
#endif
}

int USMP_Demo::computeChecksum(const uint8_t *data, int len) {
#if defined(USMP_CORE_H)
    return usmp_core_calculate_checksum(data, len);
#else
    (void)data;
    (void)len;
    return 0;
#endif
}

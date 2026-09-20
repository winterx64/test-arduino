#ifndef USMP_DEMO_H
#define USMP_DEMO_H

#include <Arduino.h>

class USMP_Demo {
public:
    USMP_Demo();
    bool begin();
    String getVersion();
    int computeChecksum(const uint8_t *data, int len);
};

#endif // USMP_DEMO_H

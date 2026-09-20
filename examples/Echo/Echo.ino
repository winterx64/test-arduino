#include <USMP_Demo.h>

USMP_Demo usmp;

void setup() {
    Serial.begin(115200);
    while (!Serial);
    usmp.begin();
    Serial.println(usmp.getVersion());
}

void loop() {
    delay(1000);
}

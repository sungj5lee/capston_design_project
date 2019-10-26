#include <Blink.h>

Blink blink(0,4);

void setup() {
  Serial.begin(9600);
  Serial.println("\nBlinkVersion 1.0 Sung Jae Lee");
}
  
void loop() {
  blink.on(500);
  blink.off(300);
}

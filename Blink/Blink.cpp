#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int negpin, int pospin){
  pinMode(negpin, OUTPUT);
  digitalWrite(negpin, LOW);
  pinMode(pospin, OUTPUT);
  digitalWrite(pospin, LOW);
  _negpin=negpin;
  _pospin=pospin;
}

void Blink::on(int t){
  digitalWrite(_pospin, HIGH);
  delay(t);
  Serial.println("high");
}

void Blink::off(int t){
  digitalWrite(_pospin, LOW);
  delay(t);
  Serial.println("low");
}

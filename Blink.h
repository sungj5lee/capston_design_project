#include "Arduino.h"

class Blink{
  public:
    Blink(int negpin, int pospin);
    void on(int t);
    void off(int t);
  private:
    int _negpin;
    int _pospin;
};

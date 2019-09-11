#include <Arduino.h>

#define DELAY 200
int BASE = 3;
int NUM = 5;
void setup()
{
  for (int i = BASE; i < BASE + NUM; i ++)
    {
      pinMode(i, OUTPUT);
      //set port ‘i’ as an output port
    }
}
void loop()
{
  for (int i = BASE; i < BASE + NUM; i ++)
    {
      digitalWrite(i, LOW);
      delay(DELAY);
    }
  for (int i = BASE; i < BASE + NUM; i ++)
    {
      digitalWrite(i, HIGH);
      delay(DELAY);
    }
}

#include <IRremote.h>

#define PIN_IR 3
#define PIN_DETECT 2
#define PIN_STATUS 13

IRsend irsend;

void setup()
{
  pinMode(PIN_DETECT, INPUT);
  pinMode(PIN_STATUS, OUTPUT);
  // irsend.modulate = false;
  // irsend.invert = true;
  irsend.enableIROut(37.9);
  irsend.mark(0);
  Serial.begin(9600);

  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
}

void loop() {
  irsend.space(0);
  delay(1);
  irsend.mark(0);
  digitalWrite(PIN_STATUS, !digitalRead(PIN_DETECT));
  delay(1);

  if(!digitalRead(PIN_DETECT)){
      Serial.println("Detected");
      
  }
}

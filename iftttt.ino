// This #include statement was automatically added by the Particle IDE.
#include "lib1.h"

int photoResistor = A5;
int photoResistorPower = A0;


void setup() {
  // configure whether pins are inputs or outputs
  pinMode(photoResistor, INPUT);
  pinMode(photoResistorPower, OUTPUT);

  // Turn on power to the photoresistor
  digitalWrite(photoResistorPower, HIGH);
}

void loop() {

    int lightLevel = analogRead(photoResistor);  // reading the photo resistor value
    int i = 1;    
  
     // classify whether the sun hits the terrarium or not
    if (lightLevel >= i ) Particle.publish("light", "present", PRIVATE);
    if (lightLevel < i) Particle.publish("light", "absent", PRIVATE);

    delay(10000);

}  
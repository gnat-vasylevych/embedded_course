#include <Arduino.h>

#define BLUE_LED_OUT 38
#define RED_LED_OUT 39

void setup() {
    pinMode(RED_LED_OUT, OUTPUT);
    pinMode(BLUE_LED_OUT, OUTPUT);

}

void loop() {
    digitalWrite(BLUE_LED_OUT, HIGH); 
    delay(100);
    digitalWrite(BLUE_LED_OUT, LOW); 

    digitalWrite(RED_LED_OUT, HIGH); 
    delay(100);
    digitalWrite(RED_LED_OUT, LOW); 


    delay(500);               
}
#include <Arduino.h>

#define FIRST_LED_OUT 15
#define SECOND_LED_OUT 16
#define FIRST_BUTTON 21
#define SECOND_BUTTON 0


// put function declarations here:
void led_mode_1();
void led_mode_2();

int first_button_val = 0;
int second_button_val = 0;
bool first_mode_on = false;
bool second_mode_on = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(FIRST_LED_OUT, OUTPUT);
  pinMode(SECOND_LED_OUT, OUTPUT);
  pinMode(FIRST_BUTTON, INPUT_PULLUP);
  pinMode(SECOND_BUTTON, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  first_button_val = digitalRead(FIRST_BUTTON);
  second_button_val = digitalRead(SECOND_BUTTON);



  if (first_button_val == HIGH) {
    second_mode_on = false;
    first_mode_on = true;
  }

  if (second_button_val == LOW) {
    first_mode_on = false;
    second_mode_on = true;
  }


  if (first_mode_on) {
    led_mode_1();
  }
  else if (second_mode_on)
  {
    led_mode_2();
  }
  

}

// put function definitions here:
void led_mode_1() {
  digitalWrite(FIRST_LED_OUT, HIGH);
  digitalWrite(SECOND_LED_OUT, HIGH);

  delay(200);

  digitalWrite(FIRST_LED_OUT, LOW);
  digitalWrite(SECOND_LED_OUT, LOW);

  delay(200);

}


void led_mode_2() {
  digitalWrite(FIRST_LED_OUT, HIGH);
  digitalWrite(SECOND_LED_OUT, LOW);

  delay(1000);

  digitalWrite(FIRST_LED_OUT, LOW);
  digitalWrite(SECOND_LED_OUT, HIGH);

  delay(1000);

}
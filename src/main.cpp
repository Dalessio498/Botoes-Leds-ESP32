#include <Arduino.h>

#define LED_1 19  // Verde
#define LED_2 18  // Amarelo
#define LED_3 5   // Vermelho
#define LED_4 4   // Verde
#define LED_5 2   // Vermelho

#define BT1 35
#define BT2 32
#define BT3 27
#define BT4 25
#define BT5 26

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);

  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);
  pinMode(BT3, INPUT);
  pinMode(BT4, INPUT);
  pinMode(BT5, INPUT);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
}

void loop() {

  if(digitalRead(BT1) == HIGH){
    digitalWrite(LED_5, HIGH);
  } else digitalWrite(LED_5, LOW);

  if(digitalRead(BT2) == HIGH){
    digitalWrite(LED_4, HIGH);
  } else digitalWrite(LED_4, LOW);

   if(digitalRead(BT3) == HIGH){
    digitalWrite(LED_3, HIGH);
  } else digitalWrite(LED_3, LOW);

   if(digitalRead(BT4) == HIGH){
    digitalWrite(LED_2, HIGH);
  } else digitalWrite(LED_2, LOW);

   if(digitalRead(BT5) == HIGH){
    digitalWrite(LED_1, HIGH);
  } else digitalWrite(LED_1, LOW);
 
}

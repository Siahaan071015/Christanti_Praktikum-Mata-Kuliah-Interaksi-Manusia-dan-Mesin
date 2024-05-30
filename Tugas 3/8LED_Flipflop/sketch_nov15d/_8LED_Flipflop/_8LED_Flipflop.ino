int ledPins[8] = { 
  0, 1, 2, 3, 4, 5, 6, 7
  };
int i;

void setup() {
  // set semua pin LED sebagai OUTPUT
  for (i = 0; i < 8; i++){
    pinMode(ledPins[i], OUTPUT);
  }

}

void loop() {
  for (i = 0; i<8; i++){
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
    delay(1000);
  }
  for (i = 7; i >= 0; i--){
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
    delay(1000);
  }

}

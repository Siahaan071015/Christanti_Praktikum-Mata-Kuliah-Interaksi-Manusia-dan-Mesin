#define pin_led1 0 
#define pin_led2 1 
#define pin_led3 2 
#define pin_led4 3 
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led1, OUTPUT); 
  pinMode(pin_led2, OUTPUT); 
  pinMode(pin_led3, OUTPUT); 
  pinMode(pin_led4, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin_led1, HIGH); 
  delay(1000); 
  digitalWrite(pin_led1, LOW); 
  delay(1000); 
  digitalWrite(pin_led2, HIGH); 
  delay(1000); 
  digitalWrite(pin_led2, LOW); 
  delay(1000); 
  digitalWrite(pin_led3, HIGH); 
  delay(1000); 
  digitalWrite(pin_led3, LOW); 
  delay(1000); 
  digitalWrite(pin_led4, HIGH); 
  delay(1000); 
  digitalWrite(pin_led4, LOW); 
  delay(1000); 

}

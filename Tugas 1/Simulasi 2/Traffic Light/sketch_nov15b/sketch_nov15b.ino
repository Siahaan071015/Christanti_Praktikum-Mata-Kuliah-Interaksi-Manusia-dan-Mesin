#define pin_ledMerah 0 
#define pin_ledKuning 1 
#define pin_ledHijau 2
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_ledMerah, OUTPUT); 
  pinMode(pin_ledKuning, OUTPUT); 
  pinMode(pin_ledHijau, OUTPUT); 


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin_ledMerah, HIGH); 
  digitalWrite(pin_ledKuning, LOW); 
  digitalWrite(pin_ledHijau, LOW); 
  delay(2000); 
  digitalWrite(pin_ledMerah, LOW); 
  digitalWrite(pin_ledKuning, HIGH); 
  digitalWrite(pin_ledHijau, LOW); 
  delay(1000); 
  digitalWrite(pin_ledMerah, LOW); 
  digitalWrite(pin_ledKuning, LOW); 
  digitalWrite(pin_ledHijau, HIGH); 
  delay(2000);

}

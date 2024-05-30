int led = 0; 
int button = 4; 
void setup() {
  // put your setup code here, to run once:
   pinMode (led, OUTPUT); 
   pinMode (button, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
   int valuebutton = digitalRead(button); 
   if (valuebutton == 1) 
 { 
   digitalWrite(led, HIGH); 
 } 
 else 
 { 
   digitalWrite(led, LOW); 
 }

}

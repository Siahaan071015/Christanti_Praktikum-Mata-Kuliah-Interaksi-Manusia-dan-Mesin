//  buat  variable  untuk  menyimpan  satu  paket  lampu  lalu  lintas
int  lampBlock1[3]  =  {  2, 1, 0  };  //  urutannya  :  Red,  Yellow,  Green
int  lampBlock2[3]  =  {  5, 4, 3 };
int lampButtons[3] = { 9, 10, 11 }; 
int i;
// fungsi untuk menjalankan block 1 
void run_lampBlock1(){
     digitalWrite(lampBlock1[2], HIGH); 
     digitalWrite(lampBlock1[1], LOW); 
     digitalWrite(lampBlock1[0], LOW); 
     delay(2000); 
     digitalWrite(lampBlock1[2], LOW); 
     digitalWrite(lampBlock1[1], HIGH); 
     digitalWrite(lampBlock1[0], LOW); 
     delay(1000); 
     digitalWrite(lampBlock1[2], LOW); 
     digitalWrite(lampBlock1[1], LOW); 
     digitalWrite(lampBlock1[0], HIGH); 
     delay(2000);
}

// fungsi untuk menjalankan block 
void run_lampBlock2(){
     digitalWrite(lampBlock2[2], HIGH); 
     digitalWrite(lampBlock2[1], LOW); 
     digitalWrite(lampBlock2[0], LOW); 
     delay(2000); 
     digitalWrite(lampBlock2[2], LOW); 
     digitalWrite(lampBlock2[1], HIGH); 
     digitalWrite(lampBlock2[0], LOW); 
     delay(1000); 
     digitalWrite(lampBlock2[2], LOW); 
     digitalWrite(lampBlock2[1], LOW); 
     digitalWrite(lampBlock2[0], HIGH); 
     delay(2000);

}

void setup(){
    // set semua pin LED sbg OUTPUT 
    for ( i = 0; i < 3; i++ ){
        pinMode(lampBlock1[i], OUTPUT);
}
    for ( i = 0; i < 3; i++ ){ 
        pinMode(lampBlock2[i], OUTPUT);
}
   for ( i = 0; i < 3; i++ ){ 
        pinMode(lampBlock3[i], OUTPUT);
}
// set semua pin button sbg INPUT 
for ( i = 0; i < 3; i ++ ){
     pinMode(lampButtons[i], INPUT);
 }
}
void loop(){
     // jika tidak ada tombol yang ditekan, maka led kuning
    // dari ketiga block lampu akan berkedip 
   if ( digitalRead(lampButtons[0]) == HIGH ){
       run_lampBlock1();
   } else if ( digitalRead(lampButtons[1]) == HIGH ){ 
      run_lampBlock2();
   } else if ( digitalRead(lampButtons[2]) == HIGH ){ 
      run_lampBlock3();
   } else {
   // nyalakan lampu kuning, dan tahan selama 1 detik 
   digitalWrite(lampBlock1[1], HIGH); 
   digitalWrite(lampBlock2[1], HIGH); 
   digitalWrite(lampBlock3[1], HIGH);
   delay(1000);
  }
   // clear smua lampu
   for ( i = 0; i < 3; i++ ){ 
       digitalWrite(lampBlock1[i], LOW); 
       digitalWrite(lampBlock2[i], LOW); 
       digitalWrite(lampBlock3[i], LOW);
       delay(1000);
 
  
}

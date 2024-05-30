//  buat  variable  untuk  menyimpan  satu  paket  lampu  lalu  lintas
int  lampBlock1[3]  =  {  2, 1, 0  };  //  urutannya  :  Red,  Yellow,  Green
int  lampBlock2[3]  =  {  5, 4, 3 };
int  lampBlock3[3]  =  {  8, 7, 6  };
int i;
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
}
void loop(){
     // block 1 dan block 3 merah bersamaan, block 2 hijau 
     digitalWrite(lampBlock1[2], HIGH); 
     digitalWrite(lampBlock1[1], LOW); 
     digitalWrite(lampBlock1[0], LOW); 
     digitalWrite(lampBlock2[2], LOW); 
     digitalWrite(lampBlock2[1], LOW); 
     digitalWrite(lampBlock2[0], HIGH); 
     digitalWrite(lampBlock3[2], HIGH); 
     digitalWrite(lampBlock3[1], LOW); 
     digitalWrite(lampBlock3[0], LOW);
     delay(2000);
     // ketiga blok berwarna kuning bersamaan 
     digitalWrite(lampBlock1[2], LOW); 
     digitalWrite(lampBlock1[1], HIGH); 
     digitalWrite(lampBlock1[0], LOW); 
     digitalWrite(lampBlock2[2], LOW); 
     digitalWrite(lampBlock2[1], HIGH); 
     digitalWrite(lampBlock2[0], LOW); 
     digitalWrite(lampBlock3[2], LOW); 
     digitalWrite(lampBlock3[1], HIGH); 
     digitalWrite(lampBlock3[0], LOW); 
     delay(1000);
    // hanya blok 2 yang merah, kedua blok lainnya hijau 
    digitalWrite(lampBlock1[2], LOW); 
    digitalWrite(lampBlock1[1], LOW); 
    digitalWrite(lampBlock1[0], HIGH); 
    digitalWrite(lampBlock2[2], HIGH); 
    digitalWrite(lampBlock2[1], LOW); 
    digitalWrite(lampBlock2[0], LOW); 
    digitalWrite(lampBlock3[2], LOW);
    digitalWrite(lampBlock1[1], LOW); 
    digitalWrite(lampBlock1[0], HIGH); 
}

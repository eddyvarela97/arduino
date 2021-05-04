//modified 04/27/2021 by Eddy @Strategix4
bool water;
float sinVal;
int toneVal;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, INPUT);
  pinMode(8, OUTPUT);
  // .5 seconds light so we know the right code is running

  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

// the loop function runs over and over again forever
void loop() {
  water =false;
  // 1 hour timer
  
  while(water==false){
    digitalWrite(LED_BUILTIN, HIGH);
//    tone(8, 500);
      for(int x=0; x<180; x++){
             // convertimos grados en radianes para luego obtener el valor.
             sinVal = (sin(x*(3.1412/180)));
             // generar una frecuencia a partir del valor sin
             toneVal = 2000+(int(sinVal*1000));
             tone(8, toneVal);
             delay(2); 
      }   
     if(digitalRead(12) == HIGH) {
      water=true;
     }
  }
  digitalWrite(LED_BUILTIN, LOW);
  noTone(8);
  delay(5000);
}

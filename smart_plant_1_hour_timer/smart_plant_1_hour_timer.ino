//modified 04/27/2021 by Eddy @Strategix4
bool water;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, INPUT);
  pinMode(8, OUTPUT);
  // 3 second light so we know the right code is running
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
}

// the loop function runs over and over again forever
void loop() {
  water =false;
  // 1 hour timer
  delay(3600000);
  while(water==false){
    digitalWrite(LED_BUILTIN, HIGH);
    tone(8, 2000);
     if(digitalRead(12) == HIGH) {
      water=true;
     }
  }
  digitalWrite(LED_BUILTIN, LOW);
  noTone(8);
}

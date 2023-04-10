void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void swap(int& a, int& b) {
  int t = a;
  a = b;
  b = t;
}

void shuffle(int* array, int n) {
  while (n--) {
    swap(array[random(n+1)], array[n]);
  }
}

void loop() {

  int array[] = { 6,7,8,9 };
  /* using digital pins 6-9 for the 4 fingers of each hand.
  */
  shuffle(array, 4); //shuffles the array randomly
  /* Serial.print(array[0]); Serial.print(array[1]); Serial.print(array[2]); Serial.print(array[3]);
     Serial.println("\n");
     Tone needs 2 arguments, but can take three
      1) Pin#
      2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
      3) Duration - how long the tone plays
  */
  // vibrates each of the 4 fingers on each hand once per cycle.
  tone(array[0], 250, 100);
  delay(160);
  tone(array[1], 250, 100);
  delay(160);
  tone(array[2], 250, 100);
  delay(160);
  tone(array[3], 250, 100);
  delay(160);
  
  shuffle(array, 4); //shuffles the array randomly
  
  tone(array[0], 250, 100);
  delay(160);
  tone(array[1], 250, 100);
  delay(160);
  tone(array[2], 250, 100);
  delay(160);
  tone(array[3], 250, 100);
  delay(160);
  
  shuffle(array, 4); //shuffles the array randomly
  
  tone(array[0], 250, 100);
  delay(160);
  tone(array[1], 250, 100);
  delay(160);
  tone(array[2], 250, 100);
  delay(160);
  tone(array[3], 250, 100);
  delay(160);
  
  delay(1280)
    
    

}

// Determine the bases
int green = 1 , red = 2 , yellow = 3, green1 = 4;
// the setup function runs once when you press reset or power the board
void setup(){
  // initialize digital pin green,red,yellow,green1 as an output
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  delay(500);       // wait for half a second
  digitalWrite(green, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalwrite(green,LOW);      // turn the LED off by making the voltage LOW
  digitalwrite (yellow,HIGH);
  delay (500);
  digitalwrite(red,LOW);
  digitalnrite(green1,HIGH);
  delay (500);
  digitalwrite(yellow,LOW);
  delay (500);
  digitalwrite(green1,LOW);
}

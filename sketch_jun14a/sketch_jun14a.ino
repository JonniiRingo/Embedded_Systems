void setup() {
  // put your setup code here, to run once:
  Serial.begin( 115200 );
  Serial.write("\nThis happens one time "); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write("\n\rHere's some text..."); 

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for(int i = 0; i <= 12; i++){
    Serial.println(i);
    delay(1000);
  }
  Serial.println("new commit and merge");
}

void loop() {
  // put your main code here, to run repeatedly:

}

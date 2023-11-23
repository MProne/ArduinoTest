void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println("hello");
  delay(1000);
  Serial.println("adding/contribute test")

  Serial.println("newwest clone commit and merge");
}

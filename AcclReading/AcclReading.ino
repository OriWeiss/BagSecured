const int xPin = A0;
const int yPin = A1;
const int zPin = A2; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(xPin);
  delay(1);
  int y = analogRead(yPin);
  delay(1);
  int z = analogRead(zPin);
  delay(1);  

  Serial.print(x - 386);
  Serial.print("\t");
  
  Serial.print(y - 382);
  Serial.print("\t");
  
  Serial.print(z - 468);
  Serial.print("\n");

  delay(1000);
}

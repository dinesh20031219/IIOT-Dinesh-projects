// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(3, LOW);
  delay(1000);
}
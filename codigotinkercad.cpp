// C++ code
//
void setup()
{
  pinMode(13, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000); 
  int dadoEntrada = analogRead(13);
  Serial.println(dadoEntrada);
}


const int sensorPin= A0;
int led=13;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);//pin para saber si pasa de 20 grados celsius     
}
 
void loop()
{
  int value = analogRead(sensorPin);
  float millivolts = (value / 1023.0) * 5000;// paso el valor del sensor a un valor en grados celsius.
  float celsius = millivolts / 10; 
  Serial.print(celsius);
  Serial.println(" C");
  if(celsius>=20){
    digitalWrite(13, HIGH);   // enciende el led
  }
  if(celsius<20){
    digitalWrite(13, LOW);   // apaga el led
  }
  delay(1000);
}

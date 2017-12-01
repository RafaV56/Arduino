// Control de Led por botón
// Enciende y apaga un LED, cuando el botón de presión se conecta al pin12
const int keyPin = 12; //pin del botón
const int ledPin = 13;//pin del led
void setup()
{
pinMode(keyPin,INPUT);//inicializamos el pin del botón en entrada
pinMode(ledPin,OUTPUT);//inicializamos el pin del led en salida
}
void loop()
{
//si el botón esta presionado el estado es HIGH
if(digitalRead(keyPin) ==HIGH )//si el pin del botón esta en presionado entra y enciende el led
{
digitalWrite(ledPin,HIGH);//Encendemos el led
}
}


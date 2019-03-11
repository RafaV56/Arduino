#include <Servo.h>
Servo servos[13];

/***   Global variables   ***/
int direccion;
int derecha=180;
int izquierda=0;
int pausa=50;
int CambioDeSentido=1500;

/***   Function declaration   ***/

void setup()
{

  direccion=true;







  Serial.begin(9600);

  servos[9].attach(9);

}


void loop()
{
    if (direccion) {
      Serial.println("entra en verdadero");
      direccion=false;
      servos[9].write(derecha);
      delay(pausa);
     }
    delay(CambioDeSentido);
    if (!direccion) {
      Serial.println("entra en falso");
      direccion=true;
      servos[9].write(izquierda);
      delay(pausa);
     }
    delay(CambioDeSentido);

}

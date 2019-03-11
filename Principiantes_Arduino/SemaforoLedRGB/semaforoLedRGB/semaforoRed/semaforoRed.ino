int rojo=3;
int amarillo=6;
int verde=5;

/***   Function declaration   ***/

void setup()
{
}


void loop()
{
    // Encendemos el led en rojo
    pinMode(rojo,OUTPUT);
    analogWrite(rojo,255);
    delay(1000);
    // Apagamos el led rojo
    pinMode(rojo,OUTPUT);
    analogWrite(rojo,0);
    pinMode(amarillo,OUTPUT);
    analogWrite(amarillo,255);
    delay(1000);
    //Encendemos el led azul
    pinMode(amarillo,OUTPUT);
    analogWrite(amarillo,0);
    pinMode(verde,OUTPUT);
    analogWrite(verde,255);
    delay(1000);
    //Encendemos el led verde
    pinMode(verde,OUTPUT);
    analogWrite(verde,0);

}

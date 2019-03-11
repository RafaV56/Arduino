/***   Global variables   ***/
int valor=0;

/***   Function declaration   ***/

void setup()
{



  Serial.begin(9600);

}


void loop()
{
    valor=analogRead(A0);
    Serial.println(valor);

}

/***   Function definition   ***/

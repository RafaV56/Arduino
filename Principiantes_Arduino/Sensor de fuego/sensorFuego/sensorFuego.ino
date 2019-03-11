
int led=13;
int valor=0;
const int sensorPin= A0;
void setup()
   {
       pinMode(led, OUTPUT);
   }

void loop()
   {
       valor = analogRead(sensorPin) ;
        if (valor>10){
          digitalWrite(13, HIGH);   // enciende el led
        }
            
         if(valor<=10){
           digitalWrite(13, LOW);   // apaga el led
         }
   }
  

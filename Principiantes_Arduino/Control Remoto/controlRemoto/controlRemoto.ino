#include <IRremote.h>

//programa para usar un control remoto.  se usa un Ir receptor en el pin 11,
//y se usa el código hexadecimal de cada tecla para usar el led 13 

int receptor=11;
int led=13;
IRrecv remoto(receptor);
decode_results codigo;//Objeto codigo de la clase code, libreria IRremote.h

void setup() {
  Serial.begin(9600);
  remoto.enableIRIn();//Inicia la recepción
  pinMode(led,OUTPUT);

}

void loop() {
   Serial.println(codigo.value, HEX);//convierto a hexadecimal la entrada de código,l y la imprimo en el monitor
  if(remoto.decode(&codigo)){//si hay un evento en el teclado del mando entrar al if
   
   if(codigo.value==0xFF6897){//si el código hexadecimal es 0(Cero) enciendo el led 13 
      digitalWrite(led,HIGH);
   } 
   if(codigo.value==0xFF30CF){//si el código hexadecimal es 1(uno)apago el led 13
      digitalWrite(led,LOW);
   }
    if(codigo.value==0xFF18E7){//si el código hexadecimal es 2(dos )el led 13 se hace intermitente 1,2 segundos
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);

      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);

   }//fin del tercer if
     
  }//fin del if del evento
  remoto.resume(); // Recive el siguiente valor  
  delay(400);
}

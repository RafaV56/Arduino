/*
  Blink
  Hacer que un led encienda y apague cada segundo.
 */

void setup() {                
  // Inicializar el pin 13 como salida
  // el pin 13 tiene su led y resistencia en arduino, pero se puede conectar igual uno en el pin 13 con la salida a GND
  pinMode(13, OUTPUT);     
}

void loop() {
  digitalWrite(13, HIGH);   // enciende el led
  delay(1000);              // espera por un segundo
  digitalWrite(13, LOW);    // apaga el led
  delay(1000);              // espera un segundo
}

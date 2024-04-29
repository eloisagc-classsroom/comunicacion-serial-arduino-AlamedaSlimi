// Definir los pines para los LEDs
const int ledPin0 = 4;
const int ledPin1 = 5;
const int ledPin2 = 6;
const int ledPin3 = 7;

// Variable para almacenar el valor del contador
int contador = 0;

void setup() {
  // Configurar los pines como salida
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  String contadorEnBinario = "";
  if(contador == 0){
	contadorEnBinario = "0000";
  }
  if(contador == 1){
	contadorEnBinario = "0001";
  }
  if(contador == 2){
	contadorEnBinario = "0010";
  }
  if(contador == 3){
	contadorEnBinario = "0011";
  }
  if(contador == 4){
	contadorEnBinario = "0100";
  }
  if(contador == 5){
	contadorEnBinario = "0101";
  }
  if(contador == 6){
	contadorEnBinario = "0110";
  }
  if(contador == 7){
	contadorEnBinario = "0111";
  }
  if(contador == 8){
	contadorEnBinario = "1000";
  }
  if(contador == 9){
	contadorEnBinario = "1001";
  }
  if(contador == 10){
	contadorEnBinario = "1010";
  }
  if(contador == 11){
	contadorEnBinario = "1011";
  }
  if(contador == 12){
	contadorEnBinario = "1100";
  }
  if(contador == 13){
	contadorEnBinario = "1101";
  }
  if(contador == 14){
	contadorEnBinario = "1110";
  }
  if(contador == 15){
	contadorEnBinario = "1111";
  }
 
  Serial.print("El numero es ");
  Serial.print(contador);
  Serial.print(" y el numero en binario es ");
  Serial.print(contadorEnBinario);
  Serial.print("\n");
 
  // Mostrar el valor actual del contador en los LEDs
  mostrarEnLEDs(contador);
 
  // Incrementar el contador
  contador++;
 
  // Si el contador alcanza el valor máximo (15), reiniciarlo a 0
  if (contador == 16) {
	contador = 0;
  }
 
  // Esperar un breve periodo de tiempo para que se pueda observar el cambio
  delay(500);
}

void mostrarEnLEDs(int valor) {
  // Convertir el valor a binario y mostrarlo en los LEDs
  digitalWrite(ledPin0, valor & 0x01);
  digitalWrite(ledPin1, (valor >> 1) & 0x01);
  digitalWrite(ledPin2, (valor >> 2) & 0x01);
  digitalWrite(ledPin3, (valor >> 3) & 0x01);
}

//Variables globales para los pines y el numero de parpadeos del LED
int pinLed = 10;
int numBlinks;
String LedOnMessage = "LED is turned on.";
String LedOffMessage = "LED is turned off.";

//Configuracion inicial
void setup()
{
  pinMode(pinLed,OUTPUT);
  digitalWrite(pinLed,LOW);
  Serial.begin(9600);
}

//Funcion principal
void loop()
{

	//Le preguntamos al usuario las veces para prender el LED
  Serial.println("Veces que quieras que prenda y apague el LED: ");
  while (Serial.available() == 0){
  }
 
	//Guardamos el valor del usuario y lo mostramos en pantalla
  numBlinks = Serial.parseInt();
  Serial.print("El usuario indica que el LED se prendera y apagara");
  Serial.print(numBlinks);
  Serial.println("Veces.");
  
  //Ciclo para prender y apagar el LED y mostrarlo en consola
  for(int counter = 1; counter <= numBlinks; counter++){
    Serial.println(LedOnMessage);
		digitalWrite(pinLed, HIGH);
		delay(1000);
		Serial.println(LedOffMessage);
		digitalWrite(pinLed, LOW);
		delay(1000);
  }
}

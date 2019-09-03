
/*
Fecha:03-09-2019
Autor: Marcos A. Riveros
OBS: Algoritmo para conexion entre sensor de flama y arduino nano,
Utilizamos el pin 2 digital para obtener los datos del sensor.
La variable Flame sera la constante que nos indicara si hay presencia
o ausencia de fuego.
*/
int FlamePin = 2;  
int Flame = HIGH;  

void setup() {

  pinMode(FlamePin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  Flame = digitalRead(FlamePin);
  if (Flame != HIGH)
  {
    Serial.println("FUEGO!!");
   
  }
  else
  {
    Serial.println("NO FUEGO");
    
  }
}


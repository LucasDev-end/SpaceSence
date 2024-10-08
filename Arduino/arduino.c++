// Inclui a biblioteca para o sensor HC-SR04
#include "Ultrasonic.h"


// Definições dos pinos de trigger e echo
const int PINO_TRIGGER = 12;
const int PINO_ECHO = 13;


// C ria uma instância do objeto HC_SR04 com os pinos definidos
HC_SR04 sensor(PINO_TRIGGER, PINO_ECHO);


// Função de inicialização
void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial a 9600 bps
}


// Função principal de execução contínua
void loop() {
  // Exibe a distância no monitor serial
  //,Serial.print("Distância: ");
  //Serial.println(sensor.distance());
  float distancia = sensor.distance();
  //Serial.println(" cm");
  Serial.print("Distancia_maxima:");
  Serial.println(40);
  Serial.print(" ");
  Serial.print("Distancia:");
  Serial.println(distancia);
  Serial.print(" ");
  Serial.print("Distancia_minima:");
  Serial.println(0);
  // Aguarda 1 segundo antes da próxima leitura
  delay(1000);

}

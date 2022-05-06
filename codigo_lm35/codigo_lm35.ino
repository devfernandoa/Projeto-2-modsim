// Define o pino que o Vout do LM35 está conectado
#define sensorPin A0

void setup() {
  // Inicia a comunicação a uma taxa serial de 9600
  Serial.begin(9600);
}

void loop() {
  // Pega a voltagem do LM35
  int reading = analogRead(sensorPin);

  // Converte a leitura em voltagem
  float voltage = reading * (5.0 / 1024.0);

  // Converte a voltagem em celsius
  float temperatureC = voltage * 100;

  // Imprime a temperatura
  Serial.print(temperatureC);
    
  // Nova linha
  Serial.print('\n');

  delay(5000); // 1000 unidades para cada segundo
}

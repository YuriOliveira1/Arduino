int led = 8; // Declara uma variável chamada 'led' e atribui o valor 8 a ela, indicando que o LED está conectado ao pino digital 8.

void setup() {
  pinMode(led, OUTPUT); // Configura o pino digital 8 como saída, indicando que será usado para enviar sinais para o LED.
}

void loop() {
  digitalWrite(led, HIGH); // Define o pino digital 8 como HIGH, o que faz o LED ligar.
  delay(100); // Aguarda 100 milissegundos.
  digitalWrite(led, LOW); // Define o pino digital 8 como LOW, desligando o LED.
  delay(500); // Aguarda 500 milissegundos.
}
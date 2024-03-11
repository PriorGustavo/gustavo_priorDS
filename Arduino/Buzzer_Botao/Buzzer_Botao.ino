

//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do botton
#define botton 4

//constante do led
#define pinoLedVermelho 3


void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(botton, INPUT);
  delay(1000);
  //parada estrategica
}
void loop() {
  Serial.println(digitalRead(botton));
if
  (digitalRead(botton) == 1) {
    Serial.println("Botão apertado ON...");
  tone(pinoBuzzer, 523);// Nota musical dó
  digitalWrite(pinoLedVermelho, HIGH);
  
  delay(1000);
  }
else {
    Serial.println("Botão apertado OFF...");
    noTone(pinoBuzzer);// Desliga a buzzer
  digitalWrite(pinoLedVermelho, LOW);// Apaga o LED
  delay(1000);
  }
}

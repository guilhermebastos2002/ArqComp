const int ledVerm = 2;
const int ledVerd = 3;
const int chaveLiga = 8;
const int horas = 1;
const int buzzer = 9;
const int ledAzul1 = 22;
const int ledAzul2 = 24;
const int ledAzul3 = 26;
const int ledAzul4 = 28;
const int ledAzul5 = 30;
unsigned long segundos;

void setup() {
pinMode(ledVerm, OUTPUT);
pinMode(ledVerd, OUTPUT);
pinMode(chaveLiga, INPUT);
pinMode(buzzer, OUTPUT);
pinMode(ledAzul1, OUTPUT);
pinMode(ledAzul2, OUTPUT);
pinMode(ledAzul3, OUTPUT);
pinMode(ledAzul4, OUTPUT);
pinMode(ledAzul5, OUTPUT);
segundos = horas * 3600;
}


void loop() {

  int estadoChave = digitalRead(chaveLiga);

  if (estadoChave == 0) {
    digitalWrite(ledVerm, HIGH);
    digitalWrite(ledVerd, LOW);
    digitalWrite(ledAzul1, LOW);
    digitalWrite(ledAzul2, LOW);
    digitalWrite(ledAzul3, LOW);
    digitalWrite(ledAzul4, LOW);
    digitalWrite(ledAzul5, LOW);
  }
  else if (estadoChave == 1) {
    digitalWrite(ledVerd, HIGH);
    digitalWrite(ledVerm, LOW);
    digitalWrite(ledAzul1, HIGH);
    digitalWrite(ledAzul2, HIGH);
    digitalWrite(ledAzul3, HIGH);
    digitalWrite(ledAzul4, HIGH);
    digitalWrite(ledAzul5, HIGH);
  }
  else {
    digitalWrite(ledVerd, LOW);
    digitalWrite(ledVerm, LOW);
  }

  if (horas == 0) {
    digitalWrite(buzzer, HIGH);
  }



}

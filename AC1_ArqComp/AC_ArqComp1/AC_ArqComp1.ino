#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define chave0 8
#define chave12 12
#define chave13 13
#define chave11 11
#define chave10 10
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;

void setup() {
  // Inicializa os parâmetros do Arduíno:
  // Configura os pinos como saída e entrada do Arduíno
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(chave0,INPUT);
  pinMode(chave12,INPUT);
  pinMode(chave13,INPUT);
  pinMode(chave11,INPUT);
  pinMode(chave10,INPUT);
}

void loop() {
  val1 = digitalRead(chave0);

  if (val1 == 1){
    val2 = digitalRead(chave10);
    val3 = digitalRead(chave11);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
    if ((val2 == 1) && (val3 == 0)) {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
  } else if ((val2 == 0) && (val3 == 1)) {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
  } else if ((val2 == 1) && (val3 == 1)) {
            digitalWrite(LED1,LOW);
            digitalWrite(LED2,HIGH);
            digitalWrite(LED3,HIGH);
    } 
    else {
            digitalWrite(LED1,LOW);
            digitalWrite(LED2,LOW);
            digitalWrite(LED3,LOW);}
  }
  else  {
    val4 = digitalRead(chave12);
    val5 = digitalRead(chave13);
  if ((val4 == 1) && (val5 == 0)) {
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,LOW);
  } else if ((val4 == 0) && (val5 == 1)){
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,HIGH);
  } else if ((val4 == 1) && (val5 ==1)) {
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
  } else if ((val4 == 0) && (val5 == 0)) {
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
  }
  }

 

}
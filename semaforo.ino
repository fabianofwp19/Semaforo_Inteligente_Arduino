int vermelho = 8;
int amarelo = 9;
int verde = 10;
int peVermelho = 11;
int peAmarelo = 12;
int peVerde = 13;

void setup(){
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(peVermelho, OUTPUT);
  pinMode(peAmarelo, OUTPUT);
  pinMode(peVerde, OUTPUT);
}

void loop(){
  
  //  semaforo carro vermelho
  
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(peVermelho, LOW);
  digitalWrite(peAmarelo, LOW);
  digitalWrite(peVerde, HIGH);
  delay(4000);
  
  // semaforo carro verde
  
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(peVermelho, HIGH);
  digitalWrite(peAmarelo, LOW);
  digitalWrite(peVerde, LOW); 
  delay(3000);
  
 // semaforo carro amarelo

  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(peVermelho, HIGH);
  digitalWrite(peAmarelo, LOW);
  digitalWrite(peVerde, LOW);
  delay(2000);
  
}

.

  

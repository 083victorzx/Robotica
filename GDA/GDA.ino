#include <VarSpeedServo.h>
#include <Ultrasonic.h>

VarSpeedServo dir_frente;
VarSpeedServo esq_frente;
VarSpeedServo dir_tras;
VarSpeedServo esq_tras;

unsigned long tempo_inicial = 0;

int s1 = 48;
int sobe1;

int s2 = 49;
int sobe2;

int d1 = 50;
int desce1;

int d2 = 51;
int desce2;

int pino_dir_fora = A0;
int faixa_dir_fora;

int pino_dir_dentro = A1;
int faixa_dir_dentro;

int pino_meio = A2;
int faixa_meio;

int pino_esq_dentro = A3;
int faixa_esq_dentro;

int pino_esq_fora = A4;
int faixa_esq_fora;

int bt = 52;
int estado_bt;

Ultrasonic ultra_frente(22, 23);
int sonar_frente;

Ultrasonic ultra_dir(26, 27);
int sonar_dir;

Ultrasonic ultra_esq(28, 29);
int sonar_esq;

Ultrasonic ultra_esq_meio(30, 31);
int sonar_esq_meio;

Ultrasonic ultra_dir_meio(24, 25);
int sonar_dir_meio;

int faixa = 400;

void setup() {
  Serial.begin(9600);
  esq_frente.attach(13);
  dir_frente.attach(11);
  esq_tras.attach(12);
  dir_tras.attach(10);

  pinMode(bt, INPUT_PULLUP);
  pinMode(pino_dir_fora, INPUT);
  pinMode(pino_dir_dentro, INPUT);
  pinMode(pino_meio, INPUT);
  pinMode(pino_esq_dentro, INPUT);
  pinMode(pino_esq_fora, INPUT);

  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
}

void loop() {

  estado_bt = digitalRead(bt);

  sobe1 = digitalRead(s1);
  sobe2 = digitalRead(s2);
  desce1 = digitalRead(d1);
  desce2 = digitalRead(d2);

  faixa_dir_fora = analogRead(pino_dir_fora);
  faixa_dir_dentro = analogRead(pino_dir_dentro);
  faixa_meio = analogRead(pino_meio);
  faixa_esq_dentro = analogRead(pino_esq_dentro);
  faixa_esq_fora = analogRead(pino_esq_fora);

  sonar_frente = ultra_frente.read();
  sonar_dir = ultra_dir.read();
  sonar_esq = ultra_esq.read();
  sonar_esq_meio = ultra_esq_meio.read();
  sonar_dir_meio = ultra_dir_meio.read();

  while(estado_bt == 1){
    para();
    delay(100);
  }

  //leitura_inclinacao();
  //leitura_sonar();
  //leitura_faixa();
  faixa1();


}





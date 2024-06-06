/*
void teste_segue() {
int tempo_recomeco;  
int tempo_inicial;
int tempo_final;
int meio_tempo;
  //if(sensor_dir_fora < faixa && sensor_esq_fora < faixa) {
  //frente();
//}
tempo_recomeco = micros();

tempo_inicial = millis();

  if(sensor_dir_fora < faixa && sensor_esq_fora < faixa) {
  frente();
meio_tempo = millis();
}
tempo_final = millis();

if(sensor_dir_fora < faixa && sensor_esq_fora < faixa && tempo_final > meio_tempo) {
    motor_direita_frente.setSpeed(125);//125
  motor_direita_tras.setSpeed(125);//125
  motor_esquerda_frente.setSpeed(125);//125
  motor_esquerda_tras.setSpeed(135);//135
  motor_esquerda_frente.run(FORWARD);  
  motor_direita_frente.run(FORWARD); 
  motor_esquerda_tras.run(BACKWARD);  
  motor_direita_tras.run(BACKWARD); 
}


if(sensor_esq_dentro > faixa && sensor_dir_dentro < faixa && sensor_dir_fora < faixa) {
  esquerda();
delay(100);
}

if(sensor_esq_dentro < faixa && sensor_dir_dentro > faixa && sensor_esq_fora < faixa) {
  direita();
delay(100);
}

//----------FALSO_90_DIREITA-----------------
if(sensor_dir_dentro > faixa && sensor_dir_fora > faixa) {
if(sensor_dir_dentro > faixa && sensor_dir_fora > faixa && sensor_meio > faixa) {
  parar();
  delay(700);
  frente();
  delay(300);
  direita();
  delay(300);
if(sensor_meio > faixa) {
    sensor_dir_dentro = analogRead(pino_dir_dentro);
  sensor_meio = analogRead(pino_meio);
while(sensor_meio < faixa) {
    sensor_dir_dentro = analogRead(pino_dir_dentro);
  sensor_meio = analogRead(pino_meio);
direita_falso();
if(sensor_meio > faixa) {
  parar();
  delay(200);
if(sensor_esq_dentro < faixa) {
  direita();
  delay(100);
}
}
}
}
}
}

//----------FALSO_90_ESQUERDA-----------------
if(sensor_esq_dentro > faixa && sensor_esq_fora > faixa) {
if(sensor_esq_dentro > faixa && sensor_esq_fora > faixa && sensor_meio > faixa) {
  parar();
  delay(700);
  frente();
  delay(300);
  esquerda();
  delay(300);
if(sensor_meio > faixa) {
    sensor_dir_dentro = analogRead(pino_dir_dentro);
  sensor_meio = analogRead(pino_meio);
while(sensor_meio < faixa) {
    sensor_dir_dentro = analogRead(pino_dir_dentro);
  sensor_meio = analogRead(pino_meio);
esquerda_falso();
if(sensor_meio > faixa) {
  parar();
  delay(200);
if(sensor_dir_dentro < faixa) {
  esquerda();
  delay(100);
}
}
}
}
}
}

//------------------------------------------------------
}
*/
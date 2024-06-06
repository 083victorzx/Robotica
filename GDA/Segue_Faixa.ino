void faixa1(){
  sonar_frente = ultra_frente.read();

  faixa_dir_fora = analogRead(pino_dir_fora);
  faixa_dir_dentro = analogRead(pino_dir_dentro);
  faixa_meio = analogRead(pino_meio);
  faixa_esq_dentro = analogRead(pino_esq_dentro);
  faixa_esq_fora = analogRead(pino_esq_fora);

  sobe1 = digitalRead(s1);
  sobe2 = digitalRead(s2);
  desce1 = digitalRead(d1);
  desce2 = digitalRead(d2);

frente1();
  //frente();
  if(sonar_frente <= 5){
    desviar_Dir();
  }
  if(faixa_esq_dentro > faixa){
    para();
    delay(10);
    esquerda(); 
    delay(100);
    }
 
  if(faixa_dir_dentro > 400){
    para();
    delay(10);
    direita();
    delay(100);
  }

  if(faixa_esq_fora > faixa && faixa_esq_dentro > faixa) {
  if(faixa_esq_dentro > faixa && faixa_esq_fora > faixa && faixa_meio > faixa) {
  if(faixa_esq_dentro > faixa && faixa_esq_fora > faixa && faixa_meio > faixa && faixa_dir_dentro > faixa) {
  faixa_dir_dentro = analogRead(pino_dir_dentro);
  while(faixa_dir_dentro < faixa) {
  faixa_dir_dentro = analogRead(pino_dir_dentro);
   esquerda();
   delay(100);
       if(faixa_dir_dentro > faixa) {
    para();
    delay(400);
   } 
  }
  }
  }
}

  if(faixa_dir_fora > faixa && faixa_dir_dentro > faixa) {
  if(faixa_dir_dentro > faixa && faixa_dir_fora > faixa && faixa_meio > faixa) {
  if(faixa_dir_dentro > faixa && faixa_dir_fora > faixa && faixa_meio > faixa && faixa_esq_dentro > faixa) {
  faixa_esq_dentro = analogRead(pino_esq_dentro);
  while(faixa_esq_dentro < faixa) {
  faixa_esq_dentro = analogRead(pino_esq_dentro);
   direita();
   delay(100);
       if(faixa_esq_dentro > faixa) {
    para();
    delay(400);
   } 
  }
  }
  }
}

/*
//-------FALSO_90_ESQUERDA-------------
if(faixa_esq_dentro > faixa && faixa_esq_fora > faixa) {
para();
delay(50);
frente();
delay(200);
faixa_meio = analogRead(pino_meio);
while(faixa_meio < faixa)  {
faixa_meio = analogRead(pino_meio);
esquerda();
if(faixa_meio > faixa) {
  para();
  delay(200);
}
}
}
if(faixa_esq_dentro > faixa && faixa_esq_fora > faixa && faixa_dir_dentro) {
para();
delay(50);
frente();
delay(200);
faixa_meio = analogRead(pino_meio);
while(faixa_meio < faixa)  {
faixa_meio = analogRead(pino_meio);
esquerda();
if(faixa_meio > faixa) {
  para();
  delay(200);
}
}
}
//-------FALSO_90_DIREITA-------------
if(faixa_dir_dentro > faixa && faixa_dir_fora > faixa) {
para();
delay(50);
frente();
delay(200);
faixa_meio = analogRead(pino_meio);
while(faixa_meio < faixa)  {
faixa_meio = analogRead(pino_meio);
direita();
if(faixa_meio > faixa) {
  para();
  delay(200);
}
}
}
if(faixa_dir_dentro > faixa && faixa_dir_fora > faixa && faixa_esq_dentro > faixa) {
para();
delay(50);
frente();
delay(200);
faixa_meio = analogRead(pino_meio);
while(faixa_meio < faixa)  {
faixa_meio = analogRead(pino_meio);
direita();
if(faixa_meio > faixa) {
  para();
  delay(200);
}
}
}
*/
//-------------------subida------------------------

if(sobe1 == 0){
  sobe1 = digitalRead(s1);
  sobe2 = digitalRead(s2);
while(1){
  faixa_dir_fora = analogRead(pino_dir_fora);
  faixa_dir_dentro = analogRead(pino_dir_dentro);
  faixa_meio = analogRead(pino_meio);
  faixa_esq_dentro = analogRead(pino_esq_dentro);
  faixa_esq_fora = analogRead(pino_esq_fora);
  sobe1 = digitalRead(s1);
  sobe2 = digitalRead(s2);
  frente();
  if(faixa_dir_dentro > faixa){
   dir_frente.write(151, 70);
   dir_tras.write(151, 70);
  }
  if(faixa_esq_dentro > faixa){
  esq_frente.write(25, 70);
  esq_tras.write(25, 70);
  }
  if(sobe1 == 1 || sobe2 == 1){
    break;
  }
}
}

//-------------------decida------------------------
if(desce1 == 0 && desce2 == 0){
  desce1 = digitalRead(d1);
  desce2 = digitalRead(d2);
while(1){
  faixa_dir_fora = analogRead(pino_dir_fora);
  faixa_dir_dentro = analogRead(pino_dir_dentro);
  faixa_meio = analogRead(pino_meio);
  faixa_esq_dentro = analogRead(pino_esq_dentro);
  faixa_esq_fora = analogRead(pino_esq_fora);
  desce1 = digitalRead(d1);
  desce2 = digitalRead(d2);
  frente1();
  if(faixa_dir_dentro > faixa){
  dir_frente.write(120, 70);
  dir_tras.write(120, 70);
  delay(300);
  }
  if(faixa_esq_dentro > faixa){
  esq_frente.write(50, 70);
  esq_tras.write(50, 70);
  delay(300);
  }
  if(desce1 == 1 || desce2 == 1){
    break;
  }
}
}

}
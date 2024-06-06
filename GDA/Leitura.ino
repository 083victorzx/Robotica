void leitura_faixa(){
  faixa_dir_fora = analogRead(pino_dir_fora);
  faixa_dir_dentro = analogRead(pino_dir_dentro);
  faixa_meio = analogRead(pino_meio);
  faixa_esq_dentro = analogRead(pino_esq_dentro);
  faixa_esq_fora = analogRead(pino_esq_fora);
Serial.print("faixa_dir_fora:  ");
Serial.print(faixa_dir_fora);
Serial.print("  faixa_dir_dentro:  ");
Serial.print(faixa_dir_dentro);
Serial.print("  faixa_meio:  ");
Serial.print(faixa_meio);
Serial.print("  faixa_esq_dentro:  ");
Serial.print(faixa_esq_dentro);
Serial.print("  faixa_esq_fora:  ");
Serial.println(faixa_esq_fora);
delay(1000);

}
void leitura_sonar(){
  sonar_frente = ultra_frente.read();
  sonar_dir = ultra_dir.read();
  sonar_esq = ultra_esq.read();
  sonar_esq_meio = ultra_esq_meio.read();
  sonar_dir_meio = ultra_dir_meio.read();

  Serial.println("//////////////////////////////////////////////////////////////////////////////");
  Serial.print("   Ultra_frente em CM:   ");
  Serial.print(sonar_frente);
  Serial.print("   Ultra_dir em CM:   ");
  Serial.print(sonar_dir);
  Serial.print("   Ultra_esq em CM:   ");
  Serial.print(sonar_esq);
  Serial.print("   Ultra_esq_meio em CM:   ");
  Serial.print(sonar_esq_meio);
  Serial.print("   Ultra_dir_meio em CM:   ");
  Serial.print(sonar_dir_meio);
  Serial.println();
  delay(500);

}
void leitura_inclinacao(){
sobe1 = digitalRead(s1);
sobe2 = digitalRead(s2);
desce1 = digitalRead(d1);
desce2 = digitalRead(d2);

Serial.print("inclinação sobe1:  ");
Serial.print(sobe1);
Serial.print("  inclinação sobe2:  ");
Serial.print(sobe2);
Serial.print("  inclinação desce1:  ");
Serial.print(desce1);
Serial.print("  inclinação desce2:  ");
Serial.print(desce2);
Serial.println();
delay(500);
}

/*esq dentro
branco 139 / 142       /preto > 170
preto  190 / 205

esq fora
branco 299 / 305       preto > 400
preto  550 /560

meio
branco 238 / 245      preto >400
preto  495 / 510      

dir dentro
branco 290 / 300     preto > 400
preto  500 / 515

dir fora
branco 330 / 340   preto> 400
preto  520 / 535
*/
void desviar_Dir(){
    para();
    delay(200);
    direita1();
    delay(2200);
    frente();
    delay(100);
  
    ///////////////////////////////////////////////////////////////
    while(1){
      faixa_meio = analogRead(pino_meio);
      sonar_esq = ultra_esq.read();
      sonar_esq_meio = ultra_esq_meio.read();
      if(faixa_meio > 350){
        para();
        delay(200);
        frente();
        delay(300);
        direita1();
        delay(2200);
        re();
        delay(300);
        break;
      }
      if(sonar_esq <= 5){
        esq_frente.write(140, 100);
        esq_tras.write(140, 100);
        dir_frente.write(50, 100);
        dir_tras.write(50, 100);
      }
      if(sonar_esq_meio < 4){
        esq_frente.write(120, 100);
        esq_tras.write(120, 100);
        dir_frente.write(65, 100);
        dir_tras.write(65, 100);

      }
      if(sonar_esq > 5){
        esq_frente.write(100, 150);
        esq_tras.write(100, 150);
        dir_frente.write(0, 255);
        dir_tras.write(0, 255);
    }
  }
}
  
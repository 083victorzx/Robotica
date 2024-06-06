void desviar_Esq(){
    para();
    delay(200);
    esquerda1();
    delay(1500);
    frente();
    delay(100);


    ///////////////////////////////////////////////////////////////
    while(1){
      faixa_meio = analogRead(pino_meio);
      sonar_dir = ultra_dir.read();
      sonar_dir_meio = ultra_dir_meio.read();
      if(faixa_meio > 350){
        para();
        delay(200);
        frente();
        delay(250);
        esquerda1();
        delay(1500);
        re();
        delay(300);
        break;
      }
      if(sonar_dir <= 4){
        esq_frente.write(140, 100);
        esq_tras.write(140, 100);
        dir_frente.write(0, 100);
        dir_tras.write(0, 100);
      }
      if(sonar_dir_meio < 4){
        esq_frente.write(140, 100);
        esq_tras.write(140, 100);
        dir_frente.write(45, 100);
        dir_tras.write(45, 100);

      }
      if(sonar_dir > 4){
        esq_frente.write(180, 100);
        esq_tras.write(180, 100);
        dir_frente.write(80, 100);
        dir_tras.write(80, 100);
      }
    }
  }
  
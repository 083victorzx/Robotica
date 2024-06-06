void frente() {
servo_esq_frente.write(180, 250); //angulo,velocidade 105
servo_esq_tras.write(180, 250);
servo_dir_frente.write(20, 250);
servo_dir_tras.write(20, 250);
}

void direita() {
servo_esq_frente.write(125, 230); //angulo,velocidade
servo_esq_tras.write(125, 230);
servo_dir_frente.write(125, 230);
servo_dir_tras.write(125, 230);
}

void esquerda() {
servo_esq_frente.write(0, 230); //angulo,velocidade
servo_esq_tras.write(0, 230);
servo_dir_frente.write(20, 230);
servo_dir_tras.write(20, 230);
}

void tras() {
servo_esq_frente.write(70, 230); //angulo,velocidade
servo_esq_tras.write(70, 230);
servo_dir_frente.write(110, 230);
servo_dir_tras.write(110, 230);
}
void pare() {
servo_esq_frente.write(90, 0); //angulo,velocidade
servo_esq_tras.write(90, 0);
servo_dir_frente.write(90, 0);
servo_dir_tras.write(90, 0);
}
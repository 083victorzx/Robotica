
#include <VarSpeedServo.h> 


VarSpeedServo servo_esq_frente;
VarSpeedServo servo_esq_tras;
VarSpeedServo servo_dir_frente;
VarSpeedServo servo_dir_tras;




void setup()
{
servo_esq_frente.attach(4);
servo_esq_tras.attach(5);
servo_dir_frente.attach(6);
servo_dir_tras.attach(7);
Serial.begin(9600);


}

void loop()
{  
servo_esq_frente.write(180, 250); 
servo_esq_tras.write(0, 250);
servo_dir_frente.write(0, 250);
servo_dir_tras.write(180, 250);

}
 


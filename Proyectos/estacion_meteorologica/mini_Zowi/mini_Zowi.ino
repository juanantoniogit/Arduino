#include <Servo.h> 
 


Servo pieIzq;      //0º lavantar pie hacia exterior - 90º pie horizontal - 180º levantar pie hacia interior
Servo pieDere;     //0º levantar pie hacia interior - 90º pie horizontal - 180º levantar pie hacia exterior
Servo caderaIzq;    //0º rotar hacia atras - 90º posicion normal - 180º rotar hacia adelante
Servo caderaDere;  //0º rotar hacia adelante - 90º posicion normal - 180º rotar hacia atras
 
int espera = 1000;
int conversion = 180;  //PONER EN LA PIERNA DERECHA, para que el angulo de la pierna derecha sea el mismo que el de la izquierda 
 
 
int pos = 0;    
 
void setup() 
{ 
  pieIzq.attach(9);
  caderaIzq.attach(10);
  pieDere.attach(5);
  caderaDere.attach(6);
} 
 
 
void loop() 
{ 
 
 
 //reposo();  
// delay(500);
  
 sobrePiernaDere() ;
 //delay(500);
// sobrePiernaIzq();
 //delay(500);
}

void sobrePiernaDere()
{
    //quedarse a la pata coja
pieIzq.write(10);
delay(espera);
pieDere.write(conversion - 145);
delay(espera);
pieIzq.write(90);
delay(espera);+
caderaIzq.write(90);
delay(espera);


  //girar cuerpo
caderaDere.write(conversion - 135);
delay(espera);

pieDere.write(conversion - 90);
delay(espera);

/////////////////////////////////////////////////////////////////
pieDere.write(conversion - 10);
delay(espera);
pieIzq.write(145);
delay(espera);
pieDere.write(conversion - 90);
delay(espera);
caderaDere.write(conversion - 90);
delay(espera);


  //girar cuerpo
caderaIzq.write(135);
delay(espera);
  //volver a poner los dos pies en el suelo

pieIzq.write( 90);
delay(espera);

  //volver a la posicion de reposo
//caderaDere.write(180 - 90);
//delay(500);
}

void sobrePiernaIzq()
{
  //quedarse a la pata coja
pieDere.write(conversion - 0);
caderaDere.write(conversion - 90);
delay(100);
pieIzq.write(150);
delay(100);
  //girar cuerpo
caderaIzq.write(135);
delay(100);
  //volver a poner los dos pies en el suelo
pieDere.write(conversion - 90);
delay(500);
pieIzq.write(90);

//delay(1000);
//caderaIzq.write(90);
}


void reposo()
{
  pieDere.write(conversion - 90);
  pieIzq.write(90);
  caderaDere.write(conversion - 90);
  caderaIzq.write(90);
}

/*
  for(pos = 0; pos < 0; pos += 1)  
  {                                  
    pieIzq.write(pos);             
    caderaIzq.write(pos);
    pieDere.write(pos);             
    caderaDere.write(pos);
    delay(15);                       
  } 
  for(pos = 0; pos>=1; pos-=1)     
  {                                
    pieIzq.write(pos);              
    caderaIzq.write(pos); 
    pieDere.write(pos);             
    caderaDere.write(pos);    
    delay(15);
  }
    */

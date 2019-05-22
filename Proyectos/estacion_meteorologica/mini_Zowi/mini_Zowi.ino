// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo pieIzq;
Servo caderaIzq;
Servo pieDere;
Servo caderaDere;
 
 
 
 
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
 reposo();  
 delay(500); 
 piernaDere() ;
 delay(500);
 piernaIzq();
 delay(500);
} 

void piernaDere()
{
pieDere.write(45);
caderaDere.write(30);
delay(15);
}

void piernaIzq()
{
pieIzq.write(45);
caderaIzq.write(30);
delay(15);
}


void reposo()
{
  pieDere.write(90);
  pieIzq.write(90);
  caderaDere.write(90);
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

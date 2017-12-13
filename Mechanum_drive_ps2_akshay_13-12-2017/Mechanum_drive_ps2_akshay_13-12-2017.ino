
#include <SoftwareSerial.h>
#include <Cytron_PS2Shield.h>

Cytron_PS2Shield ps2(10, 11); // SoftwareSerial: Rx and Tx pin

#define LEDPIN  13
#define p1 2
#define p2 3
#define p3 4 
#define p4 5
#define d1 31
#define d2 33
#define d3 35
#define d4 37

void setup()
{
  
  ps2.begin(9600); // This baudrate must same with the jumper setting at PS2 shield

 pinMode(p1, OUTPUT);
 pinMode(p2, OUTPUT);
 pinMode(p3, OUTPUT);
 pinMode(p4, OUTPUT);
 
  pinMode(d1, OUTPUT);  //B_L
 pinMode(d2, OUTPUT);   //B_R
 pinMode(d3, OUTPUT);   //A_L
 pinMode(d4, OUTPUT);   //A_M
 
}

void loop()
{
 
  if(ps2.readButton(PS2_SELECT) == 0) // 0 = pressed, 1 = released
  {
    digitalWrite(d7, LOW);
    delay(5);
  }
  else
  {
    digitalWrite(d7, HIGH);
  }
  
  if(ps2.readButton(PS2_UP) == 0) // 0 = pressed, 1 = released
  {
   digitalWrite(d1,HIGH);
   digitalWrite(d2,HIGH);
   digitalWrite(d3,HIGH);
   digitalWrite(d4,HIGH);
   analogWrite(p1,155);
   analogWrite(p2,155);
   analogWrite(p3,155);
   analogWrite(p4,155); 
   delay(70);
  }
  else 
  {
    analogWrite(p1,0);
   analogWrite(p2,0);
   analogWrite(p3,0);
   analogWrite(p4,0);
  
  }
  if(ps2.readButton(PS2_DOWN) == 0) // 0 = pressed, 1 = released
  {
    digitalWrite(d1,LOW);
   digitalWrite(d2,LOW);
   digitalWrite(d3,LOW);
   digitalWrite(d4,LOW);
   analogWrite(p1,155);
   analogWrite(p2,155);
   analogWrite(p3,155);
   analogWrite(p4,155); 
   delay(70); 
   
  }
  else 
  {analogWrite(p1,0);
   analogWrite(p2,0);
   analogWrite(p3,0);
   analogWrite(p4,0);
  
  }
  if(ps2.readButton(PS2_RIGHT) == 0) // 0 = pressed, 1 = released
  {
    digitalWrite(d1,HIGH);
   digitalWrite(d2,LOW);
   digitalWrite(d3,LOW);
   digitalWrite(d4,HIGH);
   analogWrite(p1,155);
   analogWrite(p2,155);
   analogWrite(p3,155);
   analogWrite(p4,155); 
   delay(70); 
   
  }
  else 
  {analogWrite(p1,0);
   analogWrite(p2,0);
   analogWrite(p3,0);
   analogWrite(p4,0);
  
  }
 
  if(ps2.readButton(PS2_LEFT) == 0) // 0 = pressed, 1 = released
  {
    digitalWrite(d1,LOW);
   digitalWrite(d2,HIGH);
   digitalWrite(d3,HIGH);
   digitalWrite(d4,LOW);
   analogWrite(p1,155);
   analogWrite(p2,155);
   analogWrite(p3,155);
   analogWrite(p4,155); 
   delay(70); 
   
  }
  else 
  {analogWrite(p1,0);
   analogWrite(p2,0);
   analogWrite(p3,0);
   analogWrite(p4,0);
  
  }
  
}

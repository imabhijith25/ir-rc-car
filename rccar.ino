#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
int motorpin1 = 9;
int motorpin2 = 8;
int motorpin3 = 6;
int motorpin4 = 4; //1 to 4 deals with front two wheels

int motorpin5 = 5;
int motorpin6 = 2;
int motorpin7 = 7;
int motorpin8 = 3;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
 
  // put your setup code here, to run once:
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  pinMode(motorpin3,OUTPUT);
  pinMode(motorpin4,OUTPUT);
  pinMode(motorpin5,OUTPUT);
  pinMode(motorpin6,OUTPUT);
  pinMode(motorpin7,OUTPUT);
  pinMode(motorpin8,OUTPUT);


}






void loop() {
  
  if (irrecv.decode(&results)){
    Serial.println(results.value);

       
       if(results.value == 0x78C91){
          digitalWrite(motorpin1,HIGH);
          digitalWrite(motorpin2,LOW);
          digitalWrite(motorpin3,HIGH);
          digitalWrite(motorpin4,LOW);
          digitalWrite(motorpin5,HIGH);
          digitalWrite(motorpin6,LOW);
          digitalWrite(motorpin7,HIGH);
          digitalWrite(motorpin8,LOW);
        }
        if(results.value == 0x68B92){
          digitalWrite(motorpin1,LOW);
          digitalWrite(motorpin2,HIGH);
          digitalWrite(motorpin3,LOW);
          digitalWrite(motorpin4,HIGH);
          digitalWrite(motorpin5,LOW);
          digitalWrite(motorpin6,HIGH);
          digitalWrite(motorpin7,LOW);
          digitalWrite(motorpin8,HIGH);
          }

         if(results.value == 0x78B92){
           digitalWrite(motorpin1,LOW);
           digitalWrite(motorpin2,LOW);
           digitalWrite(motorpin3,HIGH);
           digitalWrite(motorpin4,LOW);
           digitalWrite(motorpin5,HIGH);
           digitalWrite(motorpin6,LOW);
           digitalWrite(motorpin7,LOW);
           digitalWrite(motorpin8,LOW);
          }
          if(results.value == 0x54B72){
               digitalWrite(motorpin1,HIGH);
           digitalWrite(motorpin2,LOW);
            digitalWrite(motorpin3,LOW);
           digitalWrite(motorpin4,LOW);
              digitalWrite(motorpin5,LOW);
           digitalWrite(motorpin6,LOW);
              digitalWrite(motorpin7,HIGH);
           digitalWrite(motorpin8,LOW);
          }
          if(results.value==0x68b91){
            digitalWrite(motorpin1,LOW);
           digitalWrite(motorpin2,LOW);
            digitalWrite(motorpin3,LOW);
           digitalWrite(motorpin4,LOW);
              digitalWrite(motorpin5,LOW);
           digitalWrite(motorpin6,LOW);
              digitalWrite(motorpin7,LOW);
           digitalWrite(motorpin8,LOW);
            
            
           }
    irrecv.resume();
  }


    

  


 
     
 
}

#include <IRremote.h>
IRsend irsend;
int x;
int y;

void setup(){
  pinMode(8,OUTPUT);
  x = A0;
  y = A1;
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  
}

void loop(){
  //irsend.sendNEC(0x00FF40BF, 32); 
 // delay(2000);
  //irsend.sendNEC(0x00FF42CF, 32); 
  //delay(2000);
  //irsend.sendNEC(0x00FF42AF, 32); 
 int  xval = analogRead(x);
  int yval = analogRead(y);

  int  mapx = map(xval,0,1023,0,3);
  int mapy = map(yval,0,1023,7,10);


  // put your main code here, to run repeatedly:

  if(mapx==0 && mapy==8){
    
    irsend.sendSony(0x78C91, 20);
    
  }
  else if(mapx==3 && mapy==8){
    
    irsend.sendSony(0x68B92, 20);
    }
  else if(mapx==1 && mapy==10){
       
    irsend.sendSony(0x54B72, 20);
    }
   else if(mapx==1 && mapy==7){
      
      irsend.sendSony(0x78B92, 20);
    }

  

  
}


int InIR1 = 7;  
int InIR2 = 3; 

int IR1;
int IR2;


int L = 2;

int X=0;
int A=0;
int B=0;
int i=0;
int x=1;

char val;

int counter1=0;


void setup() {
  // put your setup code here, to run once:
 // put your setup code here, to run once:
   Serial.begin(9600);
pinMode(InIR1,INPUT);
pinMode(InIR2,INPUT);

pinMode(L,OUTPUT);
pinMode(L,HIGH);


}

void loop() {

if(digitalRead(InIR2) == 0 && digitalRead(InIR1) == 0){

 loop();
  
}
   val = Serial.read();
   
if(digitalRead(InIR2) == 0){
 
  for(i=0;i<500;i++){
   
     if(digitalRead(InIR1) == 0){
      counter1++;
      if (counter1>=6){
      
  counter1=6;
   
     
      
}
     Serial.println (counter1);
     
     delay(180);
     loop();
     }
     delay(2);
     
  }
}


if(digitalRead(InIR1) == 0){
 
  for(i=0;i<500;i++){
   
     if(digitalRead(InIR2) == 0){
      counter1--;
    
if (counter1<=0){
      
  counter1=0;
   
     
      
}
    
  Serial.println(counter1); 
     delay(180);
     loop();
     }
     delay(2);
  }
}

 if( val == 'R') // Forward
    {
     
      counter1=0;
      Serial.println(counter1);
    }
}




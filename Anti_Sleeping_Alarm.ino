//Developed By Sameer Gupta
//My Channel https://www.youtube.com/channel/UCRTq05GYOVclsqtAzCrNq1w/
//Video for this project https://youtu.be/87A5ncuahyQ

const int blinkPin = 2;     
const int motorPin =  13;      
const int buzzerPin =  12;

long time;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(blinkPin, INPUT);
  digitalWrite(motorPin, HIGH);
}

void loop() {
  
 if(!digitalRead(blinkPin)){
  time=millis();
  while(!digitalRead(blinkPin)){ 
   if(TimeDelay()>=2)digitalWrite(buzzerPin, HIGH);
   if(TimeDelay()>=5)digitalWrite(motorPin, LOW);
   delay(1000);
   }
 }
 else digitalWrite(buzzerPin, LOW),digitalWrite(motorPin, HIGH);
 
}


int TimeDelay(){
 long t=millis()-time;
 t=t/1000;
 return t;
}

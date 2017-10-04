int led1 = 3;
int motor = A0;
int ledlight;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(motor, INPUT);
  Serial.begin(9600);
}

void loop() { 
  
   if (analogRead(motor)>0){
    if (ledlight>=60)
    ledlight=60;
    else 
    ledlight++;
    analogWrite(led1,ledlight );   
    delay(50);
    }
    else 
    { if (ledlight>0){
      ledlight--;
    }else ledlight=0;
   
      analogWrite(led1,ledlight );   
      delay(50);
    }
    Serial.println(ledlight);
}
 
 /*ledLight = map(analogRead(motor),0, 16, 0, 255);


 Serial.println( analogRead(motor));
 Serial.print('\n');
  analogWrite(led1,ledLight );   */
  
 

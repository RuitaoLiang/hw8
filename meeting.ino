int sensorpin1 = A0; 
int ledpin1 = 5;
int sensorValue = 0;
int ledpin2 = 9;
int ledpin3 = 6;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorpin1);
  Serial.println(sensorValue);
  if(sensorValue>257.5)
 for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
      digitalWrite(ledpin1, fadeValue);
      delay(2);
  
  if(sensorValue>515) 
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
      analogWrite(ledpin2, fadeValue);
      delay(2);
  
 if(sensorValue>772.5)
  
      digitalWrite(ledpin3, sensorValue);
  delay(2);

      // pause between LEDs:
    delay(100);
  }
}
}

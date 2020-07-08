// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;

void setup() {
Serial.begin(9600); 
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzer, OUTPUT);
}

void loop(){
long duration,distance;

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance= (duration/1)/29.1;
duration = pulseIn(echoPin, LOW);
Serial.print("Distance: ");
Serial.println(distance);
delay(10);


if((distance <= 70)){
  digitalWrite(buzzer, HIGH);
}
else if (distance > 70){
  digitalWrite(buzzer, LOW);
}
}

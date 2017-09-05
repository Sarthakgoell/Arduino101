
long duration;
float distance;


void setup() {
pinMode(13, OUTPUT);
pinMode(11, INPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(13, LOW);
  delayMicroseconds(2);

  digitalWrite(13, HIGH);
  delayMicroseconds(10);

  duration = pulseIn(11, HIGH);

  distance = duration*0.03356*0.5 ;
Serial.print("Distance in cm : ");
Serial.println(distance);
delay(1000);
}

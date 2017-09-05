
long t ; 
const int out = 7;
float rpm;

void setup() 
{
 
  
  pinMode(out, INPUT);
  Serial.begin(9600);
  

  

}

void loop() {
  t = pulseIn(out, LOW);
 rpm = 60000*0.5*1000/t ;

 Serial.print("RPM : ");
 Serial.println(rpm);
delay(1000);
}

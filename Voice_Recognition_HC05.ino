String voice;
//define your pinModes or Pins here 
void setup() {
  Serial.begin(9600);
  //assign pinModes to I/O HERE
  }

void loop() {
 while(Serial.available())
 {
 delay(10);//wait to get it relaxed
char c = Serial.read();
 if(c == '#')//null string
 {break;}
voice += c;
 }
if(voice.length() >0)
{Serial.println(voice);

if(voice == "******") // Voice command according to you
{
 //Put what you wanna do
}
else if(voice == "********")//voice command according to you
{
  //Put what you wanna do
}
voice = "";//initialsing string again }}

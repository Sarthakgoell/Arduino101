/*Blink program is the most basic Arduino progam
this is the first program that you may write when 
you see the Arduino for the first time; Here the 
LED will blink with interval of 1 second.
                        Abhyuday Tripathi */




int LED = 13; // declaring LED as Digital Pin 13;

void setup()
{
pinMode(LED, OUTPUT); //initialising LED as OUTPUT
}

void loop() {
digitalWrite(LED, HIGH); //LED at +5v or ON STATE.
delay(1000); //Stays at +5v for 1000 microseconds or 1 second.
digitalWrite(LED, LOW); //LED at 0v or OFF STATE.
delay(1000); // Stays at 0v for 1000 microseconds or 1 second.

}

int mapPotentiometer = 0; //integer to make it so we don't have to write out map(0,1,2,3,4) every time
int potInput = 0; //variable for holding the value of analogRead(A5)

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); //set the Baud rate to 9600hz. You can change this in the bottom right corner of the serial monitor
  pinMode(A3, OUTPUT); //Set pin A3 as an output (this will be the 5V supply)
  pinMode(A4, OUTPUT); //Set pin A4 as the signal (otherwise known as the wiper of the potentiometer)
  pinMode(A5, INPUT); //Set pin A5 as the output (this will be the Ground)
  
  digitalWrite(A3, HIGH); //Set pin A3 to always be HIGH (act as a constant 5V supply essentially)
  digitalWrite(A4, LOW); //Set pin A4 to always be LOW (act as ground essentially)
}

void loop() 
{
  // put your main code here, to run repeatedly:
  //Serial.println(analogRead(A5)); //print the analogRead value of pin A5 to the serial monitor
  //analog value can go from 0 (0V) up to 1023 (5V)
  potInput = analogRead(A5); //storing the value of the analogRead in potInput
  potInput = constrain(potInput, 100, 800); //if potInput goes under 100, change to 100, if over 800, change to 800
  mapPotentiometer = map(potInput, 100, 800, 0, 7); // map(input, min observed, max observed, new min, new max)
  Serial.println(mapPotentiometer); //print a value between 0 and 7 from the range 100-800
}

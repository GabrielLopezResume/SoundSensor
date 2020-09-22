/*The arduino sound sensor needs to be calibrated in order 
for the digital output to respond the way you want. 
Test the output by connecting power and ground 
and looking at the on board led light.
Turn the potenitmeter until the digital output light turns on then turn 
the potenitmeter back until the light just turns off. */

// Connect to sound sensors digital pins 0-13
int digital = 3; 

// connect led to digital pins 0-13
// dont forget to use a resistor for the led 
// https://www.evilmadscientist.com/2012/resistors-for-leds/
int  led  =  13;

//variables to read into
float AnalogValue =  0;  
int DigitalValue = 0; 

void setup(){
  //set Serial to 9600 baud
  Serial.begin(9600);
  
  // set led pin as OUTPUT
  pinMode(ledPin,OUTPUT); 
  //set led to low
  digitalWrite(led,LOW);
  
  // Sets pin 3 to INPUT
  pinMode (digital, INPUT) ;  
}


void loop(){
  //led is turned on when the 
  if(digitalRead(digital)){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}

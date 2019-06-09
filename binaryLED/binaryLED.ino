/*@Author Stephen Pope
 * 
 * Binary LED representation for Arduino Mega
 * 
 * Represents a BASE-10 number supplied to the serial port as a BASE-2 value (Binary)
 * 
 * v0.1 developed for the KeyStudio Mega 2560 or Arduino ATMEGA 2560 equivalent
 */

/*
 * Pin setup
 * 
 * The KeyStudio Mega has 21 digital pins. Other boards may vary and must be adjusted accordingly.
 * #Define is used to give the pins a more memorable value than simply their number
 */

//32 bit is the maximum length for a long int
//8 bit positive int only for v0.1
#define maxPins 8

/*
 * The setup function runs just the once. This should be used to set the intial values and intialise
 * any digital/analog pins. For more information, see: https://www.arduino.cc/reference/en/
 * 
 * Serial baudrate is set to 9600 for compatibility. The rate bits need to be accepted at is low for
 * this application, so this does not require changing.
 */
 
long recieved;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100000); //This prevents the status of any LED being overwritten too quickly. 100,000 ms must elapse before the LED's will turn off.
  for(int i = 0; i < maxPins; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (Serial.available() > 0){
    recieved = Serial.parseInt();
    for(int i = 0; i < maxPins; i++){
      if(bitRead(recieved, i) == 0){
        Serial.print(bitRead(recieved, i));
        digitalWrite(i, LOW);
      }
      else{
        Serial.print(bitRead(recieved, i));
        digitalWrite(i, HIGH);
      }
    }
    Serial.println();
    }
}

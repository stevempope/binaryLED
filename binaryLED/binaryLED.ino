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

//8 bit number length for v0.1
#define maxPins 8

/*
 * The setup function runs just the once. This should be used to set the intial values and intialise
 * any digital/analog pins. For more information, see: https://www.arduino.cc/reference/en/
 */
void setup() {
  Serial.begin(9600);
  for(int i = 0; i < maxPins; i++){
    pinMode(i, OUTPUT);
    }
  }

void loop() {
}

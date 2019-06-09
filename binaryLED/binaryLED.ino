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
 #define PIN0 0
 #define PIN1 1
 #define PIN2 2
 #define PIN3 3
 #define PIN4 4
 #define PIN5 5
 #define PIN6 6
 #define PIN7 7

/*
 * The setup function runs just the once. This should be used to set the intial values and intialise
 * any digital/analog pins. For more information, see: https://www.arduino.cc/reference/en/
 */
void setup() {
  pinMode(PIN0, OUTPUT);
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  pinMode(PIN5, OUTPUT);
  pinMode(PIN6, OUTPUT);
  pinMode(PIN7, OUTPUT);
  //There is a more elegant way : https://forum.arduino.cc/index.php?topic=49548.0
}

void loop() {
  // put your main code here, to run repeatedly:

}

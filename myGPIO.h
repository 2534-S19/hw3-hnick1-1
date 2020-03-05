/*
 * myGPIO.h
 *
 *  Created on: 3/5/2020
 *      Author: Nicholas Hood
 *
 */

#ifndef MYGPIO_H_
#define MYGPIO_H_

#define LED1 BIT0 // P1.0
#define LED2_RED BIT0 // P2.0
#define LED2_GREEN BIT1 // P2.1
#define LED2_BLUE BIT2 // P2.2
#define BLED_RED BIT6 // P2.6
#define BLED_GREEN BIT4 // P2.4
#define BLED_BLUE BIT6 // P5.6
#define LAUNCHPAD_S1 BIT1 // P1.1 Left Launchpad Button
#define LAUNCHPAD_S2 BIT4 // P1.4 Right Launchpad Button
#define BOOSTERPACK_S1 BIT1 // P5.1 Top Boosterpack Button
#define BOOSTERPACK_S2 BIT5 // P3.5 Bottom Boosterpack Button
#define PRESSED 0 // button pressed

// This function initializes the peripherals used in the program.
void initGPIO();
// This function returns the value of Launchpad S1.
unsigned char checkStatus_LaunchpadS1();
// This function returns the value of Launchpad S2.
unsigned char checkStatus_LaunchpadS2();
// This function returns the value of Boosterpack S1.
unsigned char checkStatus_BoosterpackS1();
// This function returns the value of Boosterpack S2.
unsigned char checkStatus_BoosterpackS2();
// This function turns on Launchpad LED1.
void turnOn_LaunchpadLED1();
// This function turns off Launchpad LED1.
void turnOff_LaunchpadLED1();
// This function turns on Launchpad Red LED2.
void turnOn_LaunchpadLED2Red();
// This function turns off Launchpad Red LED2.
void turnOff_LaunchpadLED2Red();
// This function turns on Launchpad Blue LED2.
void turnOn_LaunchpadLED2Blue();
// This function turns off Launchpad Blue LED2.
void turnOff_LaunchpadLED2Blue();
// This function turns on Launchpad Green LED2.
void turnOn_LaunchpadLED2Green();
// This function turns off Launchpad Green LED2.
void turnOff_LaunchpadLED2Green();
// This function turns on Boosterpack Red LED.
void turnOn_BoosterpackLEDRed();
// This function turns off Boosterpack Red LED.
void turnOff_BoosterpackLEDRed();
// This function turns on Boosterpack Green LED.
void turnOn_BoosterpackLEDGreen();
// This function turns off Boosterpack Green LED.
void turnOff_BoosterpackLEDGreen();
// This function turns on Boosterpack Blue LED.
void turnOn_BoosterpackLEDBlue();
// This function turns off Boosterpack Blue LED.
void turnOff_BoosterpackLEDBlue();

// TODO: Define any constants that are local to myGPIO.c using #define


#endif /* MYGPIO_H_ */

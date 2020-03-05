/*
 * GPIO.c
 *
 *  Created on: 3/5/2020
 *      Author: Nicholas Hood
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    // Launchpad S1
    P1DIR = P1DIR & ~LAUNCHPAD_S1;
    P1REN = P1REN | LAUNCHPAD_S1;
    P1OUT = P1OUT | LAUNCHPAD_S1;

    // Launchpad S2
    P1DIR = P1DIR & ~LAUNCHPAD_S2;
    P1REN = P1REN | LAUNCHPAD_S2;
    P1OUT = P1OUT | LAUNCHPAD_S2;

    // Boosterpack S1
    P5DIR = P5DIR & ~BOOSTERPACK_S1;
    P5REN = P5REN | BOOSTERPACK_S1;
    P5OUT = P5OUT | BOOSTERPACK_S1;

    // Boosterpack S2
    P3DIR = P3DIR & ~BOOSTERPACK_S2;
    P3REN = P3REN | BOOSTERPACK_S2;
    P3OUT = P3OUT | BOOSTERPACK_S2;

    // Launchpad LED1
    P1DIR = P1DIR | LED1;

    // Launchpad LED2 Red
    P2DIR = P2DIR | LED2_RED;

    // Launchpad LED2 Green
    P2DIR = P2DIR | LED2_GREEN;

    // Launchpad LED2 Blue
    P2DIR = P2DIR | LED2_BLUE;

    // Boosterpack LED Red
    P2DIR = P2DIR | BLED_RED;

    // Boosterpack LED Green
    P2DIR = P2DIR | BLED_GREEN;

    // Boosterpack LED Blue
    P5DIR = P5DIR | BLED_BLUE;


    // Turn off all LEDs at the start.
    P1OUT = P1OUT & ~LED1; // Launchpad LED1
    P2OUT = P2OUT & ~LED2_RED; // Launchpad LED2 red
    P2OUT = P2OUT & ~LED2_GREEN; // Launchpad LED2 green
    P2OUT = P2OUT & ~LED2_BLUE; // Launchpad LED2 blue
    P2OUT = P2OUT & ~BLED_RED; // Boosterpack LED red
    P2OUT = P2OUT & ~BLED_GREEN; // Boosterpack LED green
    P5OUT = P5OUT & ~BLED_BLUE; // Boosterpack LED blue
}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    return ((P1IN & LAUNCHPAD_S1) == LAUNCHPAD_S1);
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    return ((P1IN & LAUNCHPAD_S2) == LAUNCHPAD_S2);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return ((P5IN & BOOSTERPACK_S1) == BOOSTERPACK_S1);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    return ((P3IN & BOOSTERPACK_S2) == BOOSTERPACK_S2);
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1OUT = P1OUT | LED1;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1OUT = P1OUT & ~LED1;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P2OUT = P2OUT | LED2_RED;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P2OUT = P2OUT & ~LED2_RED;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2OUT = P2OUT | LED2_GREEN;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2OUT = P2OUT & ~LED2_GREEN;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2OUT = P2OUT | LED2_BLUE;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2OUT = P2OUT & ~LED2_BLUE;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2OUT = P2OUT | BLED_RED;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2OUT = P2OUT & ~BLED_RED;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2OUT = P2OUT | BLED_GREEN;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2OUT = P2OUT & ~BLED_GREEN;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5OUT = P5OUT | BLED_BLUE;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5OUT = P5OUT & ~BLED_BLUE;
}

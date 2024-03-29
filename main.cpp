/*
This program will print HELLO WORLD on the Serial Monitor Screen
using MBED OS5. Make sure you set the SERIAL MONITOR to 9600 Baud
*/

#include "mbed.h"               // include the MBED library

// main() runs in its own thread in the OS
int main()
{
    printf("Hello World\n");
    for(;;);                    // loop forever
}


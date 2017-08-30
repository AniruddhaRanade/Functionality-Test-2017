/*
 * OBCm--FT2017--Aniruddha.c
 *
 * Created: 28-07-2017 16:35:31
 * Author : Aniruddha Ranade
 */ 

#define F_CPU 8000000
#include <avr/io.h>
#include "common.h"
#include "timer.h"
#include "uart.h"
#include "spi.h"
#include "i2c.h"
#include "led_tests.h"


int main(void)
{
    // Initializations
    
    // Variables
    
    sei();
	
	while (1) 
    {
		//Loop
		/*//Include this section to get a watchdog with timer of two seconds 
		  //if the time taken to run the loop is less than 2 seconds then the timer will wait for two seconds and run the loop again.
		  //Whereas if the time to run the loop is greater than two sec then WDT will reset the microcontroller and whole code will
		  //run again along with the initializations.
		  timer_reset_two_sec();
		  wdt_enable(WDTO_2S);
		  wdt_reset();
		  //do the thing
		  wdt_disable();
		  timer_wait_reset();
		*/
		
		
    }
}


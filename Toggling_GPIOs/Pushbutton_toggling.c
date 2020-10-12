#include <stdbool.h>                              //standard headers  
#include <stdint.h>  
#include "nrf_delay.h"  
#include "nrf_gpio.h"  
  
#define LED 14                                    //     LED atached to Pin 14   
#define Button 17                                 //     Pushbutton (pulled down) at Pin 17  
  
int main(void)  
  
{  
 nrf_gpio_cfg_output(LED);  
 nrf_gpio_cfg_input(Button, NRF_GPIO_PIN_PULLUP);  
 nrf_gpio_pin_clear(LED);  
  
 while(true)  
  
  {  
    if(nrf_gpio_pin_read(Button)==1)            //Checking for 1(pressed) in Pin 17 and open the loop if found  
    {  
      nrf_gpio_pin_set(LED);                   //Turn on LED  
      while(nrf_gpio_pin_read(Button)==1);     //Hold in the loop while pressed  
      nrf_gpio_pin_clear(LED);                 //Turn off LED when pushbtton is left  
    }   
  }  

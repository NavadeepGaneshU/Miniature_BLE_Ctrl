#include <stdbool.h>          //standard headers  
#include <stdint.h>  
#include "nrf_delay.h"  
#include "nrf_gpio.h"  
  
#define led 14                // GPIO subjeced to change as per  
  
int main(void)                       
  
{  
 nrf_gpio_cfg_output(led);    //configure LED as output  
  
   while(1)  
  
  {  
    nrf_gpio_pin_set(led);    //Turn on  
    nrf_delay_ms(500);  
  
    nrf_gpio_pin_clear(led);  //Turn off  
    nrf_delay_ms(500);  
  }  
}  

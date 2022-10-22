#include<stdio.h>
#include"HHC.h"
void main()
{
    printf("\n Hand Held Computer \n");
    lcd_init();
    gps_init();
    gsm_init();
   
    ds1307_init();
    At24_init();
     printer_init();
    keypad_init();
        printf("\n");
}
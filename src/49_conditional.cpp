#include <iostream>
#include <stdio.h>



#define WIDTH 100
#define height 200

#define SUM(n)  ( n*(n+1) >> 1 )


// select which machin4e to run

#define ARM 0X01
#define PIC 0x02
#define AVR 0x03
#define PC  0x04


#define MACHINE PC

const int myWidth = 100;




// GLOBALS 
int x = 1, y = 2, z = 3; 


int main(){
    #if (MACHINE == ARM )
        printf("\nDo ARM specific tasks...");
    #endif

    #if (MACHINE == PIC )
        printf("\nDo PIC specific tasks..."); 
    #endif

    #if ( MACHINE == AVR )
        printf("\nDo AVR specific tasks..."); 
    #endif

    #if (MACHINE == PC )
        printf("\nDo PC specific tasks..."); 
        // assign constant
        // myWidth = 200; Error 
        printf("\nmyWidth = %d", myWidth);
    #endif

    



    // return success 
    return ( 0 );

}
 #include <iostream>
#include <stdio.h>


// int var1 = 10, var2 = 3, var3 = 5;


//Bitshift Operators 8-bit is from 0 -255
uint8_t var1    = 0b00000111;
uint8_t var2    = 0b00001000;
uint8_t var3    = 0b00010001;
uint8_t result  = 0b00000000;

int main (){




    // printf("\nbefore var1 = %d", var1);

    // // Increment
    // // var1 = var2++ + ++var3; 

    // // Division 
    // // var1 = var1 / var2; 

    // //Modulus 
    // var1 = var1 % var2;

    // Or
    // result = var1 | var2;

    //XOR
    // result = var1 ^ var3;

    //NOT 
    // result = ~var1;

    //Bitshift : 3
    // result = var1 >> 1;

    //Bitshift : 56 
    // result = var1 << 3;

    //Bitshift Overflow: 0
    // result = var1 << 8;

    // Bitshift shorthand 
    result = var1 << 2;
    var1 <<=  2;

    printf("\nvar1 = %d", var1);
    printf("\nvar2 = %d", var2);
    printf("\nvar3 = %d", var3);


    printf("\nresult  = %d", result);


    
return 0;
}
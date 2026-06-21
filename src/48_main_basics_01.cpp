#include <iostream>
#include <stdio.h>

#define TRUE true
#define FALSE false

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MAIN FUNCTION ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int numberInt = 1000, numberTwo = 2000;


long longInt = 100000;

double f1 = 3.14159265368;

// char is onlu 8-bit 
// -128 ... 0 ... +127
// mechanically involes the compliment in computation of the value

char ch = -128;
unsigned char ch2 = 300;
short ch3 = 300;

int var1 = 100, var2 = 200, var3 = 300;

int8_t i1 = 100;
int16_t i2 = 65535;
int32_t i3 = 100000;

bool powerOn = TRUE;
bool doorOpen = FALSE;

//Hexidecimal
int position = 0x123F;

//Binary
int positionB = 0b11010001;

//Octal
int positionOct = 0123;   

int main()
{ // Local scope 1
int var1 = 1; // local variable 
// Redeclaration of variable in the same scope will not work.

int var4 = 4; // Local variable


    printf("\nsizeof( int ) = %d", (int)sizeof( int ) );
    printf("\nsizeof( long ) = %d", (int)sizeof( long ) );

    printf("\nlongInt = %ld", (int)longInt );
    
    printf("\nnumberInt = %d", (int)numberInt );
    printf("\nnumberTwo = %d", (int)numberTwo );
    printf("\nf1 = %2.8f", f1);
    printf("\n ch = %d ", ch );
    printf("\n ch2 = %d ", ch2 );
    printf("\n ch3 = %d", ch3 );
    
    printf("\nvar1 = %d \nvar2 = %d \nvar3 = %d \nvar4 = %d", ::var1, var2, var3, var4);

    printf("\npowerOn = %d", powerOn);
    printf("\ndoorOpen = %d", doorOpen);
    printf("\n sizeof(bool) = %d", (int)sizeof( bool ) ); 

    printf("\ni1 = %d", i1);
    printf("\ni2 = %d", i2);
    printf("\ni2 = %d", i3);


    // printf("\nlongInt = %d, longInt);

    // Hexidecimal 
    printf("\nposition = 0xXx", position);

    // binary
    printf("\npositionB = %x", positionB);

    //Octal
    printf("\npositionOct = %d", positionOct);




    return 0;
}


/* The heap and the Stack are the 2 data types that operating systems use with various programs and computation.*/

// :: is the scope resolution operator. 




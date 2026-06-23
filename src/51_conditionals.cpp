#include <iostream>
#include <stdio.h>




int a = 2, b = 1, c = 2; 


int16_t a16 = 100;
int32_t b32 = 100000;

int main(){

    // if (a == b){
    //     printf("\na = b");
    // }

    // if (a > b){
    //     printf("\na > b");
    // }

    // if (b < c){
    //     printf("\nb < c");
    // }

    // if (a != b){
    //     printf("\na != b -> %d", (a!=b));
    // }

    // if ((a == b) && (b != c)){
    //     printf("\n(a == b) && (b != c) is true!  -> %d",  ((a == b) && (b != c))    ); 
    // }

//     if (a > b){
//         printf("\na > b");

//     } 
//     else if(a < b ){
//         printf("\na < b");
//     }
//     else {
//         printf("\na = b");

//     }


// // Ternary conditional 
// int result = (a > b ? 5 : 11);
// printf("\nresult = %d", result);



// int16_t a16 = 100;
// float f = 123.45;
// //casting
// a = (float)f



// c syntax
// a16 = (int)b32;
//c++ syntax
a16 = static_cast<int16_t>(b32);

printf("\na16 = %d, b32 = %d", a16, b32);
    return 0;
}
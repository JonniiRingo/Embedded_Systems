#include <iostream>
#include <stdio.h>




int a = 1, b = 2, c = 3; 

int main(){

    if (a == b){
        printf("\na = b");
    }

    if (a > b){
        printf("\na > b");
    }

    if (b < c){
        printf("\nb < c");
    }

    if (a != b){
        printf("\na != b -> %d", (a!=b));
    }






    return 0;
}
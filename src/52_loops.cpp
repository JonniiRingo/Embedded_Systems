#include <iostream>
using namespace std;
#include <stdio.h>




int main(){

    cout << "\nBefore while" << endl;

int i = 0;


// While loop 
    while( ++i <= 100 ){
        cout << "\ni =  " << i << endl;
        if ( i == 5){
            break;
        }
    }

    cout << "\nAfter while\n\n" << endl;

int j = 10;


// Do while
    do {
        cout << "\nj = " << j << endl;
    }while ( --j >= 0);
cout << "\nAfter do while\n\n" << endl;


    int d;
// For loop 
cout << "\nBefore for loop" << endl;
    for (int d = 0; d < 10; d++ ){

    if (d == 4){
        continue;
    }

    cout << "\nd = " << d << endl;
}


 cout << "\nAfter the for loop. " << endl;

 char myName[] = {'J', 'o' , 'n', 'a', 't', 'h', 'a', 'n', 0};

 for (int l = 0; l < 8; l++){
    cout << myName[l];
 }

 cout << endl;

    return 0;
}



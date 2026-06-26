#include <iostream>
using namespace std;
#include <stdio.h>




int main(){

    cout << "\nBefore while" << endl;

int i = 0;

    while( ++i <= 100 ){
        cout << "\ni =  " << i << endl;
        // i++;
    }

    cout << "\nAfter while\n" << endl;

int j = 10;

    do {
        cout << "j = " << j << endl;
    }while ( --j >= 0);


    return 0;
}
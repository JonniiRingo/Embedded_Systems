#include <iostream>
#include <stdio.h>
#include <cstring>
#include <ctime>
using namespace std;


void DelayMSec ( int msec );

clock_t currTime, startTime, endTime;

#define CLOCKS_PER_MSEC ( CLOCKS_PER_SEC/1000)


// delay a moment

void DelayMSec ( int msec ){
    if (msec < 0 ){
        return;
    }
            while( ( clock() - startTime) < msec*CLOCKS_PER_MSEC );
}

int main(){




    while(1){
        startTime = clock();
        cout << "Tick..." << endl;
        // delay a moment
        DelayMSec(100);

    }




    return 0;
}
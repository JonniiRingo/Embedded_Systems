#include <iostream>
using namespace std;
#include <stdio.h>




int main(){
    for(int index = 0; index < 10; index ++){
        switch(index){
            case 1:
            {
                cout << "In case 1. Index = " << index << endl;
            } break; 

            case 2:
            {
                cout << "In case 2. Index = " << index << endl;
            } break;

            case 3:
            case 4: 
            case 5:  // Case = 3 - 5 ;
            {
                cout << "In case 3. Index = " << index << endl;
            } break;
        }
    }




    return 0;
}
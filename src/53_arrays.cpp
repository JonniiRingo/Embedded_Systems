#include <iostream>
using namespace std; 
#include <stdio.h>




int16_t playerScores [ 16 ]= {1,1,2,3,5,8,13,21,0,0,0,0,0,0,0,0};

int main(){

    int index = 0;

    // while (index++ < 15){

    // for (int index = 0; index < 16; index++){


    // for each loop
    for (auto element : playerScores){
    // cout << "PlayerScores [ n  ] = " << playerScores[index] << endl;

    // For each syntax
    cout << "PlayerScores [ n  ] = " << element << endl;

    // c way to print it
    // printf("\nplayerScores[ %d ] = %d", index, playerScores[index]); 
    }



    return 0;
}
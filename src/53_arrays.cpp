#include <iostream>
using namespace std; 
#include <stdio.h>




int16_t playerScores [ 16 ]= {1,1,2,3,5,8,13,21,0,0,0,0,0,0,0,0};



static char strings [3][9] = { 
                        { '7','5','4','7','3','4','6','7','4'},
                        { '1','2','9','7','9','6','4','6','7'},
                        { '8','6','7','7','4','3','2','4','5'},
                      };
static char words[3][9]= {
    {"Filename"},
    {"imageDat"},
    {"HelloWrl"},
};

int main(){



for (int row = 0; row < 3; row ++ ){
    cout << "\nRow  " << row << ":";
    for (int col = 0; col < 9; col++ ){
        cout << strings[row][col] << "," ;
    }
}
cout << "\n" << endl;


for (int row = 0; row < 3; row ++ ){
    cout << "\nRow  " << row << ":";
    for (int col = 0; col < 9; col++ ){
        cout << words[row][col] << "," ;
    }
}
cout << "\n" << endl;







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
#include <iostream>
using namespace std;
#include <stdio.h>
#include <cstring>



char myName[] = "Jonnii Ringo";
char yourName[] ="Marty McFly";


// Functions



int addInts(int x, int y){
    int sum = x + y;
    return sum;
}


int main(){

int length = strlen(myName) + 1;

cout << "my name is " << myName << " and the length of this string is " << length << endl;

strcpy(myName, yourName);

memset (myName, 'x', 3);

cout << "my name is " << myName << " and the length of this string is " << length << endl;

int a = 1;
int b = 7;

cout << addInts(a,b) << endl;

    return 0;
}
#include <iostream>
using namespace std;
#include <stdio.h>
#include <cstring>



char myName[] = "Jonnii Ringo";
char yourName[] ="Marty McFly";





int main(){

int length = strlen(myName) + 1;

cout << "my name is " << myName << " and the length of this string is " << length << endl;

strcpy(myName, yourName);

cout << "my name is " << myName << " and the length of this string is " << length << endl;



    return 0;
}
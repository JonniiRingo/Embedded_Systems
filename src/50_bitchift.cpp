 #include <iostream>
#include <stdio.h>


int var1 = 1, var2 = 2, var3 = 3;

int main (){




    printf("\nbefore var1 = %d", var1);

    var1 = var2++ + ++var3; 

    printf("\nvar1 = %d", var1);
    printf("\nvar2 = %d", var2);
    printf("\nvar3 = %d", var3);

    
return 0;
}
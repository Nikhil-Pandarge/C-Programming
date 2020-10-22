/* There are two types of type conversion:
        i) Implicit Type Conversion:
        ii)Explicit Type Conversion:
*/


// Implicit Type Conversion:



#include<stdio.h>

int main()
{
    int x = 10;
    char y = 'a';

    x = x +y; // y convert it into 97 due to ASCII value.

    printf("X value: %d\n",x);

    float z = x + 10.0; // x will be convert into float.

    printf("Z value: %f\n",z);
}


                    // AND




// Explicit Type Conversion:

#include<stdio.h>

int main()
{
    double x = 2.99;

    int sum = (int)x + 1; // here the int will be called as explicit operator,
                          // and the x will be convert from double to int with value = 2.

    printf("Sum is: %d\n",sum);
}

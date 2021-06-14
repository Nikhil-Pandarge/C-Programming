/*2. Write a C program that generates a random number between 5 and 10, using
    the "rand()" funtion in stdlib.h, and outputs 'a', 'b' , 'c' , 'd'
    with prob('a')=2/10, prob('b')=3/10, prob('c')=3/10, prob('d')=2/10 respectively.

    output:
            10 numbers generated. DO NOT USE LOOPS.
*/
#include<stdlib.h>
#include<stdio.h>
void main()
{
    int a = 1+rand()%11;
    if(a<3){
        printf("a");
    }else if(a>6){
        printf("b");
    }else if(a<9){
        printf("c");
    }else{
        printf("d");
    }
}

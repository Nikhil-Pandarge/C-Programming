//string concatenation using Strcat():

#include<stdio.h>
#include<string.h>

void main()
{
    char a[]={"Nikhil"},b[]={"Pandarge"},c[]={"Nishant"};

    printf("Array A is: %s\n",a);

    printf("Array B is: %s\n",b);

    strcat(a,b);

    printf("Array A after Concatenation is: %s\n",a);

    strncat(c,b,4);

    printf("Array C after Concatenation is: %s\n",c);

    //printf("Array B is: %s\n",b);
}

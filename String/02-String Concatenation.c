#include<stdio.h>

 string concatenation using Strcat():
#include<string.h>
void main()
{
    char a[]={"Nikhil"},b[]={"Pandarge"};

    printf("Array A is: %s\n",a);

    printf("Array B is: %s\n",b);

    strcat(a,b);

    printf("Array A is: %s\n",a);

    printf("Array B is: %s\n",b);
}

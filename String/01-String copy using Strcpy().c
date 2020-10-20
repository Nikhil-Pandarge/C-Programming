#include<stdio.h>
#include<string.h>

int main()
{
    char a[]={"Nikhil"},b[20];

    printf("array a is: %s",a);

    // copy from a to b:

    strncpy(b,a,3);

    printf("\nArray b is: %s",b);
}

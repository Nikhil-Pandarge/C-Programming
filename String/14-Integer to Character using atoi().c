// integer to character conversion using itoa():


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char a[12];
    int i;

    printf("Enter the value for 'I':\n");
    scanf("%d",&i);

    itoa(i,a,10);

    printf("The value of 'I' is: %d\t The value of 'A' is: %s\n",i,a);
}

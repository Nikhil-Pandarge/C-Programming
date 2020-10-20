// character into integer conversion using atoi():


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char a[12];
    int i;

    printf("Enter the string for 'A':\n");
    gets(a);

    i = atoi(a);

    printf("The value of 'A' is: %s\t The value of 'i' is: %d\n",a,i);
}


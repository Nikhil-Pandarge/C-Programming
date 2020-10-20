// Reverse string using strrev():

#include<stdio.h>
#include<string.h>

void main()
{
    char a[12];

    printf("Enter the string for 'A':\n");
    gets(a);

    strrev(a);

    printf("The reversed string 'A' is:%s\n",a);
}

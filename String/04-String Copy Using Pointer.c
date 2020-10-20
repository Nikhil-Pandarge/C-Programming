#include<stdio.h>

void strcpy(char *,char*);


void main()
{
    char a[10],b[10];

    printf("Enter string elements of array 'a':\n");
    gets(a);


    strcpy(a,b);

    printf("copied string 'b':%s\n",b);
}

void strcpy(char *x,char *y)
{
    while(*y++ = *x++);
}

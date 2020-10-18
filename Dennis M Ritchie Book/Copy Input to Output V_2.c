#include<stdio.h>

void main()
{
    int c;
    while((c=getchar()) != EOF)
    {
        putchar(c);
        printf("\n EOF: %d \n",EOF);
    }
}

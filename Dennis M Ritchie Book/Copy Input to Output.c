#include<stdio.h>

void main()
{
    int c;
    printf("Enter string For C:\n");
    c = getchar();

    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

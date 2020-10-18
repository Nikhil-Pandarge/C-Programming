#include<stdio.h>

void main()
{
    char c,last_c;
    while((c = getchar()) != EOF)
    {
        if(c !=' ' || last_c != ' ')
            putchar(c);
        last_c = c;
    }
}

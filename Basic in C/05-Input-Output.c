//Copy input to output:

/*#include<stdio.h>
void main(void)
{
    int c;
    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}*/

// OR

#include<stdio.h>
void main(void)
{
    int c;
    while((c = getchar())!=EOF)
    {
        putchar(c);
    }
}

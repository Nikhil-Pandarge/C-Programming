// string concatenation using function and pointer:

#include<stdio.h>

void strcat(char *a,char *b)
{
    //int i,j;
    //i = j = 0;

   1. while(*a) // Sir, I have problem here.
        a++;

        OR

   2. while(*a++) // difference between 1 and 2.

    while(*b)
    {
        *a = *b;
        *a++;
        *b++;
    }

}

void main()
{
    char x[]={"Nikhil"},y[]={"Pandarge"};

    printf("Value of Array 'X' is: %s\n",x);

    printf("Value of Array 'Y' is: %s\n",y);

    strcat(x,y);

    printf("Value of Array 'X' is: %s\n",x);
}

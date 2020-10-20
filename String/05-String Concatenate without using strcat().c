// string concatenation using function and pointer:

#include<stdio.h>

void strcat(char a[],char b[])
{
    int i,j;
    i = j = 0;

    while(a[i] != '\0') // Sir, I have problem here.
        i++;

    while((a[i++]=b[j++])!= '\0');

}

void main()
{
    char x[]={"Nikhil"},y[]={"Pandarge"};

    printf("Value of Array 'X' is: %s\n",x);

    printf("Value of Array 'Y' is: %s\n",y);

    strcat(x,y);

    printf("Value of Array 'X' is: %s\n",x);
}


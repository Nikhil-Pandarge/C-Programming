// Reverse string without using strrev():

#include<stdio.h>
#include<string.h>

int revstr(char x[])
{
    int temp,i,j;

    for(i=0,j=strlen(x)-1;i<j;i++,j--)
    {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp; //Afetr i and j cross each other i.e i < j will become false
                     // and codition terminates.
    }
    return 0;
}
void main()
{
    char a[12];

    printf("Enter the string for 'A':\n");
    gets(a);

    revstr(a);

    printf("The reversed string 'A' is:%s\n",a);
}

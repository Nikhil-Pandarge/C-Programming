// Write a programe to read input until user enterns a positive integer:

#include<stdio.h>

void main()
{
    int n;
    do
    {
        printf("Enter the value of n:");
        scanf("%d",&n);
    }while(n <= 0);
    printf("Value of n is: %d",n);
}

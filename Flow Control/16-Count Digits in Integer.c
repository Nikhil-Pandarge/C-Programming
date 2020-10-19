// C Program to Count digits in integer:

#include<stdio.h>

void main()
{
    int n,count=0;

    printf("Enter the integer:");
    scanf("%d",&n);

    while(n != 0)
    {
        n /= 10;
        count++;
    }
    printf("Total digits in integer is: %d",count);
}

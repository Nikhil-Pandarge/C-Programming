// Find the whether the given number is odd or even:

#include<conio.h>
#include<stdio.h>

void main()
{
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);

    if(number %2 == 0)
    {
        printf("%d is even number\n",number);
    }
    else
    {
        printf("%d is odd number\n",number);
    }
}

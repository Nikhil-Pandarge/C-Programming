//Use Ternary Operator to find whether to find the number is odd or even.

#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);

    (number % 2 == 0)? printf("%d Given number is even!\n",number) : printf("%d Given number is odd!\n",number);
}

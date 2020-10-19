// check whether palindrome is or not!

#include<stdio.h>

void main()
{
    int num,num_1,rem,rev=0;

    printf("Enter the number:\n");
    scanf("%d",&num);

    num_1 = num;

    while(num_1>0)
    {
        rem = num_1 % 10;
        rev = rev  * 10 + rem;
        num_1 /= 10;
    }
    (rev == num)?printf("Palindrome!"):printf("Not Palindrome!");
}

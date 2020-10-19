// C program to check Armstrong number:

#include<stdio.h>
#include<math.h>

int main()
{
    int num,n,temp,count=0,digit,sum=0;

    printf("Enter the value for num:");
    scanf("%d",&num);

    n = num;
    while(n != 0)
    {
        n /= 10;
        count++;
    }
    n = num;
    while(n != 0)
    {
        digit = n %10;
        sum += pow(digit,count);
        n /= 10;
    }

    (sum == num)?printf("Armstrong Number!"):printf("Not a Armstrong Number!");

    return 0;
}

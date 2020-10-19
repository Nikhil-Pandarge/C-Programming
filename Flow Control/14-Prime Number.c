// Write a C programe to check whether given number is prime number or not:

#include<stdio.h>

void main()
{
    int n,i,flag=1;

    printf("Enter the Number:");
    scanf("%d",&n);

    for(int i=2;i <= n/2;i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is not prime\n",n);
    }
    else
    {
        printf("%d is prime\n",n);

    }
}

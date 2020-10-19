// Find the factorial for given number:

#include<stdio.h>

int main()
{
    int n,fact=1,i;

    printf("Enter the Number to Find Factorial:");
    scanf("%d",&n);
    if(n < 0){
        printf("Please enter positive number");
    }
    else
    {
    for(i = 1;i <= n;i++)
        fact *= i;
    printf("%d fact is:%d",n,fact);
    }

}

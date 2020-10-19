// Take the 15 numbers from user and sum only those who are positive integers:

#include<stdio.h>
#include<conio.h>

int main()
{
    int Sum = 0,i,N;
    for(i = 0;i < 15;i++)
    {
        printf("Enter the value for N:");
        scanf("%d",&N);
            if(N <= 0){
                continue;
            }
            Sum += N;
    }
    printf("The sum for giving positive integer is:%d",Sum);
}

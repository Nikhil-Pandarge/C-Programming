// C programme for calculating sum of N natural number:

#include<stdio.h>
#include<conio.h>

void main()
{
    int N,i,Sum=0;

    printf("Enter the value for N:\n");
    scanf("%d",&N);

    for(i=0;i<=N;i++)
    {
        Sum += i;
    }
    printf("The sum for 1 to %d is: %d\n",N,Sum);
}

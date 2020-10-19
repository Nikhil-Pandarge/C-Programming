#include<stdio.h>

void main()
{
    int first_num,second_num,sum,number,counter=0;

    printf("Enter the number of terms:\n");
    scanf("%d",&number);

    printf("Enter First Number:\n");
    scanf("%d",&first_num);

    printf("Enter Second Number:\n");
    scanf("%d",&second_num);

    printf("Fibonacci Series are:%d\t%d",first_num,second_num);
    while(counter < number)
    {
        sum=first_num + second_num;
        printf("\n%d",sum);
        first_num = second_num;
        second_num = sum;
        counter++;
    }

}

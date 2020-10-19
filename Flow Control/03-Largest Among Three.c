#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2,num3;
    printf("Enter the num1,num2,num3:");
    scanf("%d %d %d ",&num1,&num2,&num3);

    if(num1 > num2 && num2 > num3)
    {
        printf("%d is greater among all",num1);
    }
    else if(num2 > num1 && num1 > num3)
    {
        printf("%d is greater among all",num2);
    }
    else
    {
        printf("%d is greater among all",num3);
    }
}

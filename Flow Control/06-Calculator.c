#include<stdio.h>
#include<conio.h>

void main()
{
    char op; // op stands for operator like +,-,*,/.
    double num1,num2;

    printf("Enter the operator(+,-,*,/):\n");
    scanf("%c",&op);

    printf("Enter num1 and num2:");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("The sum of %lf and %lf is: %lf",num1,num2,num1 + num2);
        break;
    case '-':
        printf("The substraction of %lf and %lf is: %lf",num1,num2,num1 - num2);
        break;
    case '*':
        printf("The product of %lf and %lf is: %lf",num1,num2,num1 * num2);
        break;
    case '/':
        printf("The division of %lf and %lf is: %lf",num1,num2,num1 / num2);
        break;
    default:
        printf("Enter valid Op.");
    }
}

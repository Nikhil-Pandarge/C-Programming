// Swapping of two numbers;

#include<stdio.h>

void swap(int *,int*);

void main()
{
    int a,b;

    printf("Enter the value for a and b:\n");
    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("After swapping:\n%d\n%d",a,b);
}

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

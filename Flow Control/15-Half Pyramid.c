// C program to draw half pyramid:

#include<stdio.h>

void main()
{
    int i,j,numberofrows;
    printf("Enter the value for number of rows:");
    scanf("%d",numberofrows);

    for(i = 0;i < numberofrows;i++)
    {
        for(j = 0;j <= i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

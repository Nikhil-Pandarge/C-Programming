/*

// Code 01:-

#include<stdio.h>

void main()
{
    register int i = 5;

    int *a = &i;

    printf("%d",*a);
}
*/


/*
// Code 02:-

#include<stdio.h>

void main()
{
    int i = 10;

    register int *a = &i;

    printf("%d",*a);
}
*/



// Code 03:-

#include<stdio.h>

void main()
{
    int i = 10;

    register static int i = 5; // error: multiple storage classes in declaration specifier.

    int *a = &i;

    printf("%d",*a);
}



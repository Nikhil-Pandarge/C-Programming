// For more information regarding this question refer section 07 Lecture 12 in C programing.

#include<stdio.h>

char *getString()
{
    char str[] = "Print It!";

    return str;
}

void main()
{
    printf("%s",getString());
}


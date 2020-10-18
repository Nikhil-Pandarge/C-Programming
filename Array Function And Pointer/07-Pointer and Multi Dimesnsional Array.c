// Program to execute to identify whether array of pointer and multi-dimensional array will same?

#include<stdio.h>

void main()
{
    char *a[]={"ravi","ravindra","ravindrababu"};

    printf("string is:%s\n",*a+1); // this term difference to the below term.

    // That the *a + 1 is the value of first string of an array 'a', going at 1st position.

    printf("string is:%s",*(a+2)+8);

    // Whereas the *(a+2) is the value of third 3rd string of an array 'a',going at 8th position.

    printf("string is:%c",a[2][8]);
}

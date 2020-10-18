// For more information regarding this question refer section 07 Lecture 09 in C programing.

#include<stdio.h>

void main()
{
    int n;
    for(n=4;n!=0;n--) // if we puts n = 3 then the code will run for infinite time.
        printf("Value of n= %d\n",--n);
}

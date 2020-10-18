// For more information regarding this question refer section 07 Lecture 11 in C programing.

#include<stdio.h>

enum{false,true};

int main()
{
    int n=1;
    do
    {
        printf("%d\n",n);
        n++;
        if(n < 15)
            continue;
    }while(false);
    return 0;
}

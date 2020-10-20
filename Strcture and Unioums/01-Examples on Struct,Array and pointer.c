// Examples on Structure,Array and Pointer:

// Refer section: 09 Lecture: 02.

#include<stdio.h>

struct node
{
    int i;
    int *c;
};

void main()
{
    struct node a[20],*p;
    int b[2] = {30,40};

    p = &a[0];

    a[0].i = 10, a[1].i = 20;

    a[0].c = b;

    printf("++p -> i: %d\n",++p -> i);

    int x = (++p) -> i;

    printf("(++p) -> i: %d\n",x);

    x = (p++) -> i;

    printf("(p++) -> i: %d\n",x);

    x = *p -> c;

    printf("*p -> c: %d\n",x);

    x = *p -> c++;

    printf("*p -> c++: %d\n",x);

    x = (*p -> c)++;

    printf("(*p -> c)++: %d\n",x);

    x = *p++ -> c;

    printf("*p++ -> c: %d\n",x);
}

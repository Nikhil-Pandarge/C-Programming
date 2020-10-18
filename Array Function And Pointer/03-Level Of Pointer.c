// Level of pointer:

#include<stdio.h>
void main()
{

    int x;

    int *p = &x;

    int **q = &p;

    int ***r = &q;

    printf("Enter the value of X:\n");
    scanf("%d",&x);

    printf("The value of X: %d\n",x);

    printf("The address of x: %u\n",&x);

    printf("The value of p: %d\n",*p);

    printf("The address of p: %u\n",&p);

    printf("The value of q: %d\n",**q);

    printf("The address of q: %u\n",&q);

    printf("The value of r: %d\n",***r);

    printf("The address of r: %u\n",&r);
}

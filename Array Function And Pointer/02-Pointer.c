// pointer example:

#include<stdio.h>
void main()
{
    int x;
    int *y=&x;

    printf("Enter the value for x:\n");
    scanf("%d",&x);

    printf("value for x: %d\n",x);

    printf("value for &x: %u\n",&x);

    printf("value for &y: %u\n",&y);

    printf("value for *y: %d\n",*y);

    return 0;

}

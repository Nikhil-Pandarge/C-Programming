#include<stdio.h>
int a = 20;
int main()
{
    int i;
    for(i = 0;i < 3;i++)
    {
        static int a = 5;
        int b = 4;

        printf("Value: %d\n",a);
        //printf("Value: %d\n",a);

        printf("Value: %d\n",a + b);
    }
    printf("Value: %d\n",++a);

    return 0;
}

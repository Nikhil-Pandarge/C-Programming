#include<stdio.h>

int strcmp(char *a,char *b)
{
    for(;*a==*b;a++,b++)
        if(*a == '\0')
        {
            return 0;
        }
    return *a-*b;

}
void main()
{
    char x[]={"Nikh"},y[]={"Nikhil"};

    printf("String 'X':%s\n",x);

    printf("String 'y':%s\n",y);

    int result = strcmp(x,y);

    if(result > 0)
    {
        printf("1\n");
    }
    else if(result < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("Same\n");
    }

    printf("The result is: %d\n",result);


}

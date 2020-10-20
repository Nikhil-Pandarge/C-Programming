// String Comparision using strcmp():

#include<stdio.h>
#include<string.h>

void main()
{
    char x[]={"Nikh"},y[]={"Nikhi"};

    printf("String 'X':%s\n",x);

    printf("String 'y':%s\n",y);

    int result = strcmp(x,y); // if a is greater in length then it will be retun 1
                              //  and vice versa, result = 0 then string will be same.

    printf("The result is: %d\n",result);
}

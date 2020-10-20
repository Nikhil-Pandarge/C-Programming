// Converting integer into character in c:

#include<stdio.h>
#include<string.h>

int itoa(int n,char x[])
{
    int sign;
    if((sign = n) < 0)
        n = -n;
    int i = 0;
    do
    {
        x[i++] = n % 10 + '0';
    }while((n/=10)>0);
    if(sign < 0)
        x[i++] = '-';
    x[i] = '\0';

    strrev(x);

    printf("The converted number in string is:%s",x);
}

void main()
{
    char s[10];
    int number;

    printf("Enter the number:\n");
    scanf("%d",&number);

    itoa(number,s);

    //printf("The converted number in string is:%s",result);
}

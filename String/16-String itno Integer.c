// character into integer conversion using atoi():

#include<stdio.h>
int atoi(char x[])
{
    int n = 0,i;

    for(i=0;x[i]>='0' && x[i]<='9';++i)
        n = n * 10 + (x[i]-'0');
    return n;
}

void main()
{
    char a[12];
    int i;

    printf("Enter the string for 'A':\n");
    gets(a);

    i = atoi(a);

    printf("The value of 'A' is: %s\t The value of 'i' is: %d\n",a,i);
}



// String length or counting character present in the string without using function() andstrlen( ):

#include<stdio.h>

void main()
{
    char a[20];

    printf("Enter the string 'A':\n");
    gets(a);

    int i = 0;

    for(;getchar()!=EOF;++i);

    printf("Length is:%d\n",i);

}

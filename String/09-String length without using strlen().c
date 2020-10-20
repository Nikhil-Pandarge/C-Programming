// String length or counting character present in the string without using strlen( ):

#include<stdio.h>

int strlen(char s[])
{
   int i=0,count=0;

   for(;s[i]!='\0';i++)
        count++;
   return count;
}

void main()
{
    char a[15];

    printf("Enter the string in A:\n");
    gets(a);

    int result = strlen(a);

    printf("Number of character in string 'A' is: %d\n",result);
}

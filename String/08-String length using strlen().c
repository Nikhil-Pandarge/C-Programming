// String length or counting character present in the string using strlen( ):

#include<stdio.h>
#include<string.h>

void main()
{
    char a[15];

    printf("Enter the string value to 'A':\n");
    gets(a);

    printf("The string value after entering 'A' is: %s\n",a);

    int result = strlen(a);

    printf("The length or character present in  string 'A' is: %d\n",result);
}

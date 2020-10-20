// Write a c program to remove all occurences of all the character c from the string:

void removeChar(char a[],int c)
{
    int i,j;
    for(i=j=0;a[i]!='\0';i++)
        if(a[i]!= c)
        {
            a[j++] = a[i];
        }
    a[j] = '\0';
}

void main()
{
    char c[] = {"ABCBD"};
    int b = 'B';

    removeChar(c,b);

    printf("Value of C is:%s\n",c);
}

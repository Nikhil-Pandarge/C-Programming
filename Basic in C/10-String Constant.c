// string length strlen:

#include<stdio.h>
int main()
{
    int strlen(char s[])
    {
        int i = 0;
        while(s[i] != '\o')
            i = i + 1;
        return i;
    }
}

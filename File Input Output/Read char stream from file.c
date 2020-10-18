// Read Char stream from file:

#include<stdio.h>
#include<stdlib.h>

#define default_size 100

char *resize(char *p,int count);

void main()
{
    int count = 0, capacity = default_size;
    char *input;
    char ch;

    input = (char *) malloc(default_size);

    while((ch = getchar()) != EOF)
    {
        if(count == capacity)
        {
            input = resize(input,capacity);

            capacity = capacity + default_size;
        }
        input[count++] = ch;
    }
    puts(input);
}

char *resize(char *p,int capacity)
{
    return realloc(p,capacity+default_size);
}

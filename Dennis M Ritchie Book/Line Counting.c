#include<stdio.h>

void main()
{
    int lc =0,tc=0,bc=0;
    char c;
    while((c=getchar())!=EOF)
        if(c == '\n') // if at end increment lc count.
            lc++;
        else if(c =='\t')
            tc++;
        else if(c ==' ')
            bc++;
    printf("LC: %d \n TC: %d \n BC: %d",lc,tc,bc);
}

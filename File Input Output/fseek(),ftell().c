#include<stdio.h>

void main()
{
    FILE *fp;
    int len;

    fp = fopen("01-sample.txt","r");

    if(fp == NULL)
    {
        printf("Error!");
    }

    fseek(fp,0,SEEK_END);

    len = ftell(fp);

    fclose(fp);

    printf("total size is %d",len);
}

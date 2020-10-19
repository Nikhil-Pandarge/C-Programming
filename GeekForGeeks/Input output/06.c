#include<stdio.h>

int main()
{
    char *s = "Geeks For Geeks";
    int n = 7;
    printf("%.*s",n,s);
}

/*
.* means The precision is not specified in the format string,
but as an additional integer value argument preceding the argument
that has to be formatted.

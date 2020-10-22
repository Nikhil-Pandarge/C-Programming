#include<stdio.h>

void main()
{
    int farh,celcius;
    int lower,step,upper;
    lower = 0;
    step = 20;
    upper = 300;
    farh = lower;
    while(farh <= upper)
    {
        celcius = 5 *(farh - 32)/9;
        printf("Fareheit= %d\t and Celcius= %d\n",farh,celcius);
        farh += step;
    }
}

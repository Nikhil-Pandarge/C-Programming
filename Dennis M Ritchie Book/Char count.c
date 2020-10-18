// Using while loop;
/*#include<stdio.h>

void main()
{
     int nc=0;
     while(getchar() != EOF)
     {
         nc++;
     }
    printf("total c number: %d",nc);
}*/
// Using For loop;
#include<stdio.h>

void main()
{
    int nc;
        for(nc =0;getchar() != EOF;nc++); // ; is imp because we have no statement in for loop!
    printf("total c number: %d",nc);
}

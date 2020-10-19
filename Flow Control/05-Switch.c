// Switch statement program for finding respective weekday:

#include<stdio.h>
#include<conio.h>

void main()
{
    int weekday;
    printf("Enter the weekday between 1 to 7:\n");
    scanf("%d",&weekday);

    switch(weekday)
    {
    default:      // we can add default anywhere in the code.
        printf("Enter valid weekday");
    case 1:
        printf("This is Monday!");
        break;
    case 2:
        printf("This is Tuesday!");
        break;
    case 3:
        printf("This is Wensday!");
        break;
    case 4:
        printf("This is Thursday!");
        break;
    case 5:
        printf("This is Friday!");
        break;
    case 6:
        printf("This is Saturday!");
        break;
    case 7:
        printf("This is Sunday!");
        break;
    }
}

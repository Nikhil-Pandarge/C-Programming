/*

//Section 08  Lecture 02:

// Static Int Code:

int callingFunction(void)
{
    int count = 0;
    return ++count;
}
int main()
{
    callingFunction();
    callingFunction();
    callingFunction();
    printf("Value: %d\n",callingFunction());
    return 0;
}

*/


//Section 08  Lecture 03:
#include<stdio.h>
int main()
{
    static int i = 4;
    if(--i) // whenver the value in the if bracket ' if(this value) ' greater
            // than 0 the loop will execute.
    {
        main();
        printf("%d\n",--i);
    }
}

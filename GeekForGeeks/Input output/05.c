#include<stdio.h>

int main()
{
    printf("%c",5["GeeksForGeeks"]);
    return 0;
}
/*

The crux of the program lies in the expression: 5["GeeksQuiz"]
This expression is broken down by the compiler as: *(5 + "GeeksQuiz").
Adding 5 to the base address of the string increments the pointer(lets
say a pointer was pointing to the start(G) of the string initially) to
point to Q. Applying value-of operator gives the character at the
location pointed to by the pointer i.e. Q.

Reference:
        https://www.geeksforgeeks.org/c-language-2-gq/input-and-output-gq/
*/

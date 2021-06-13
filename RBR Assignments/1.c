/* 1. Calculate and print
    (i) n-th term of a arithmetic series and
    (ii) sum up to n-th term.

    input :
            first term, common difference, value of n

    output: n<integer>-th term is: <term>
            sum up to n<integer>-th term is: <sum>
*/

#include<stdio.h>

void main()
{

    int a,d,n,a_n,sum;

    printf("Enter the first term, commomn difference and value of n: \n");
    scanf("%d%d%d",&a,&d,&n);

    a_n = a + (n-1) * d;

    sum = (n * (2 * a + (n-1) * d))/2;

    printf("The nth value is: %d \n",a_n);

    printf("Sum is: %d \n",sum);
}

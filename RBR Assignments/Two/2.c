/*2. Find the minimum and the maximum among 3 integers using the ternary conditional operator.

    input :
            the three integers
    output:
            maximum of the three numbers: <max_num>
            minimum of the three numbers: <min_num>
*/
#include<stdio.h>
void main()
{
    int num1,num2,num3,result_max,result_min;
    printf("Enter the num1,num2 and num3 respectively:\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    result_max = (num1>num2?((num1>num3)?num1:num3):(num2>num3)?num2:num3);

    result_min = (num1>num2?((num2>num3)?num3:num2):(num1>num3)?num3:num1);

    printf("Max number:%d\n",result_max);
    printf("Min number:%d\n",result_min);
}

#include <stdio.h>
#include<math.h>
int main() {
	//code

	int number,original_number,result =0,remainder,n=0;

	printf("Enter the number:");
	scanf("%d",&number);

	original_number = number;
	while(original_number != 0)
    {
        original_number /= 10;
        ++n;
    }

    original_number = number;
    while(original_number != 0)
    {
        remainder = original_number % 10;
        result += pow(remainder,n);
        original_number /= 10;
    }

    //printf("print sum %d and num %d",sum,num);

	if(result == original_number)
	{
	    printf("Given number is Armstrong!");
	}
	else
	{
	    printf("Given number is not Armstrong!");
	}

	return 0;
}

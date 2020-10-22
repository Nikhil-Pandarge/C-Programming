#include<stdio.h>
int main()
{
	int temp,n,cnt;
	char arr[100],i;
	printf("Enter number:");
	scanf('%d',&n);
	while(n!=0)
	{
		temp = n % 2;
		n = n/2;
		arr[cnt] = temp;
		cnt++;
	}
	for(i = cnt-1;i>=0;i--)
	{
		printf("%d".arr[i]);
	}
	return 0;
}

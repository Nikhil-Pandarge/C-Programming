#include<stdio.h>
int main()
{
	int i,space;
	int cnt=10,k=0;
	for(i=0;i<=cnt;++i,k=0)
	{
		for(space=1;space=cnt-i;++space)
		{
			printf(" ");
		}
		while(k != 2*i-1)
		{
			printf("*");
			++k;
		}
		printf("\n");
	}
	return 0;
}

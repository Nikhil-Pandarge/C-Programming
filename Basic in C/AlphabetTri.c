#include<stdio.h>
void main()
{
	int x,i,j;
	int cnt=10;
	for(i=1;i<=cnt;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}

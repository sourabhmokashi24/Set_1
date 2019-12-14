#include<stdio.h>

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if (n>0)
	{
		printf("\n%d is positive\n",n);
	}
	else
	{
		printf("\n%d is negative\n",n);
	}
	return 0;
}
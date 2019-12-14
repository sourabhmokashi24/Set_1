#include<stdio.h>

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if (((n/2)*2)==n)
	{
		printf("\n%d is even\n",n);
	}
	else
	{
		printf("\n%d is odd\n",n);
	}
	return 0;
}
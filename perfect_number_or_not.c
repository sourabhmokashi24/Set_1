#include<stdio.h>

int main()
{
	int n,rn=0,i;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if((n%i)==0)
		{
			rn=rn+i;
		}
	}
	if(rn==n)
	{
		printf("\n%d is perfect number\n",n);
	}
	else
	{
		printf("\n%d is not perfect number\n",n);
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int n,rn=0,re=0,i,fact,t;
	printf("enter number\n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		re=n%10;
		fact=1;
		for (i=1; i<=re; i++)
		{
			fact=fact*i;
		}
		rn=rn+fact;
		n=n/10;
	}
	if(rn==t)
	{
		printf("\n%d is strong number\n",t);
	}
	else
	{
		printf("\n%d is not strong number\n",t);
	}
	return 0;
}
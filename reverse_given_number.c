#include<stdio.h>

int main()
{
	int n,rn=0,re;
	printf("enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		re=n%10;
		rn=rn*10+re;
		n=n/10;
	}
	printf("\nreverse number is %d\n",rn);
	return 0;
}
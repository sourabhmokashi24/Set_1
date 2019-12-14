#include<stdio.h>

int main()
{
	int n,p,rn=1,i;
	printf("enter number\n");
	scanf("%d",&n);
	printf("\nenter power\n");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		rn=rn*n;
	}
	printf("\npower of number is %d\n",rn);
	return 0;
}
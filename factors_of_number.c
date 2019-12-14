#include<stdio.h>

int main()
{
	int n,rn=0,i;
	printf("enter number\n");
	scanf("%d",&n);
	printf("\nfactors of number %d are",n);
	for(i=1;i<=n;i++)
	{
		if((n%i)==0)
		{
			printf(" %d",i);		
		}
	}
	printf("\n");
	return 0;
}
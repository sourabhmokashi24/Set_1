#include<stdio.h>

int main()
{
	int n,i,f1=0,f2=1,f=0;
	printf("enter number\n");
	scanf("%d",&n);
	printf("%d\t%d",f1,f2);
	for(i=1;i<=n;i++)
	{
		f=f1+f2;
		printf("\t%d",f);
		f1=f2;
		f2=f;
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int n,i,sum=0;
	printf("enter starting number\n");
	scanf("%d",&i);
	printf("enter ending number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\nsum is %d\n",sum);
	return 0;
}
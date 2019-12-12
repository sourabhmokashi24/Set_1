#include<stdio.h>

int main()
{
	int n,l=1;
	printf("enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		l++;
	}
	printf("\ndigits in an integer %d\n",l);
	return 0;
}

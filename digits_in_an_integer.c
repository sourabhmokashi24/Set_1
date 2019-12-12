#include<stdio.h>
#include<math.h>

int main()
{
	int n,l;
	printf("enter number\n");
	scanf("%d",&n);
	l=log10(n);
	printf("\ndigits in an integer%d\n",l+1);
	return 0;
}

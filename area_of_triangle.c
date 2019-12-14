#include<stdio.h>

int main()
{
	float h,b,a=0;
	printf("enter height\n");
	scanf("%f",&h);
	printf("enter base\n");
	scanf("%f",&b);
	a=(h*b)/2;
	printf("\narea of circle is %f\n",a);
	return 0;
}
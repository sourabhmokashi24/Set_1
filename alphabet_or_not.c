#include<stdio.h>

int main()
{
	char c;
	printf("\nenter charecter");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		printf("\nGiven charecter is alphabet");
	}
	else
	{
		printf("\nGiven charecteris not alphabet");
	}
	return 0;
}
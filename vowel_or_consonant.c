#include<stdio.h>
int main()
{
	char ch;
	int lowercase,uppercase;
	printf("\n enter charter ");
	scanf("%c",&ch);
	lowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
	uppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
	if (lowercase || uppercase)
	{
		printf("\n%c is vowel\n",ch);
	}
	else
	{
		printf("\n%c is a is consanent \n",ch);
	}
	return 0;
}
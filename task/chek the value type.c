#include<stdio.h>
int main()
{
	char a;
	printf("enter the value:");
	scanf("%c",&a);
	if((a >='a'&&a <='z')||(a >='A'&&a <='Z'))
	{
		printf("alphabet");
	}
	else if(a >='0'&&a <='9')
	{
		printf("number");
	}
	else
	{
		printf("special char");
	}
	return 0;
}

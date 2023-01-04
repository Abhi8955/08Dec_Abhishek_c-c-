#include<stdio.h>
int main()
{
	//a=35 b= 65
	// swap a=65 b=35
	int a,b;
	int temp;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	//b = a - b;
	//a = a - b;
	printf("after the swaping a:%d and b:%d",a,b);
}

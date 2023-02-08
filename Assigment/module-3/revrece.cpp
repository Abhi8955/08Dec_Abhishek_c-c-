//wap for  print number in reverce ordeer
#include<stdio.h>
int main()
{
	int n,r,reverse=0;
	printf("enter number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r = n % 10;
		reverse = reverse * 10 + r;
		n = n / 10;
		
	}
	printf("reverse number is : %d",reverse);
	return 0;
}

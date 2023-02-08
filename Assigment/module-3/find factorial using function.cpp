//wap to find factorial of number using function
#include<stdio.h>
int fact(int n)
{   
	if (n==0)
	
	{
    return 1;
    }
    int factnumber1=fact(n-1);
    int factN=factnumber1*n;
	return factN;
}
int main()
{
	int n;
	printf("enter number to find factorial : ");
	scanf("%d",&n);
	printf("factorial of number is : %d",fact(n));
	return 0;
	
}

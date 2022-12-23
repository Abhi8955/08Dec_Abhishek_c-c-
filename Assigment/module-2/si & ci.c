#include<stdio.h>
#include<math.h>s
int main()
{
	float p,r,n,si,ci;
	
	printf("enter the value of p:");
	scanf("%f",&p);
	
	printf("\nenter the value of r:");
	scanf("%f",&r);
	
	printf("\nenter the value of n:");
	scanf("%f",&n);
	
	si=p*r*n/100;
	printf("\n-----------simple intrest-------------");
	printf("\nsimple intrest is:%f",si);
	
	ci=p*pow((1+r/100),n)-p;
	printf("\n------------compound interst------------");
	printf("\ncompound intrest is:%f",ci);
}

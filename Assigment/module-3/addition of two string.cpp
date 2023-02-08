#include<stdio.h>
 
int main() {
   int *ptr1, *ptr2, a, b;
   int ans;
    ptr1 = &a;
    ptr2 = &b;
   printf("Enter first number : ");
   scanf("%d",ptr1);
   printf("\nEnter second number : ");
   scanf("%d",ptr2);
 
   ans = *ptr1 + *ptr2;
 
   printf("\naddition of two pointer is %d :  ", ans);
   return (0);
}

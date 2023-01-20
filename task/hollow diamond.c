#include<stdio.h>
void main()
{ 
    int r,n,i,c,s;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(r=0;r<n;r++)
    {
        i=1;
        for(c=n;c>r;c--)
        {
         printf("%d",i);
         i++;
        }
    
        for(s=0;s<(r*2);s++)
         printf(" ");
         i--;
        
        for(c=n;c>r;c--)
        { 
         printf("%d",i);
         i--;
        }
        printf("\n");
    }
    for(r =1; r <= n; r++)
    {
        for(c =1; c <= n; c++)
        {
         if(c <= r)
         printf("%d",c);
         else
         printf(" ");
        }
        for(c = n; c >= 1;c--)
        {
         if(c <= r)
         printf("%d",c);
         else
         printf(" ");
        }
         printf("\n");
    }
}
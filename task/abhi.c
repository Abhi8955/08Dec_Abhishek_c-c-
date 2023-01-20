#include<stdio.h>
void main()
{
    
    int a,b,c,d;
    printf("enter the number of row:");
    scanf("%d",&a);
    for(b=1;b<=a;b++)//main loop
    {
        for(c=1;c<=a-b;c++)//for space loop
        printf(" ");
        for(d=1;d<=b;d++)//first half of pyramid
        printf("%d",d);
        for(c=d-2;c>=1;c--)//second half of pyramid
        printf("%d",c);
        
        printf("\n");
    }
    
    
}
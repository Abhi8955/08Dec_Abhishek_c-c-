#include<stdio.h>
void main()
{ 
    int i,j;
    
    
    for(i=0;i<=11;++i)
    { 
        for(j=0;j<=6;++j)
        { 
            if(i == 0 && i < 2 && j == 3 || i > 0 && i < 3 && j > 1 && j < 4 || i > 2 && i < 10 && j == 3 || i > 9 && j > 0 && j < 6)
            printf("11");
            
            else
            printf("  ");
           
        }
        printf("\n");
    }
      
}
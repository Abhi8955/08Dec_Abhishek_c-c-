//wap to find max number from given matrix
#include<stdio.h>
int main()
{
	int i,j,max=0,array[3][3];
	printf("******************enter elements of metrix*****************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter number of array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{    
	   for (j=0;j<3;j++)
	   {
	  	if(max < array[i][j])
		   {
			max = array[i][j];
		   }
   	   }
	}
	printf("........................matrix.....................\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",array[i][j]);
		}
		printf("\n");
	}
	
	printf("max number of metrix is : %d",max);
}

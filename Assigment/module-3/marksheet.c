#include<stdio.h>
int main()
{
	int eng,hindi,math,guj,com;
	int totalmark;
	float per;
	printf("enter the subject mark eng:");
	scanf("%d",&eng);
	
	printf("enter the subject mark hindi:");
	scanf("%d",&hindi);
	
	printf("enter the subject mark math:");
	scanf("%d",&math);\
	
	printf("enter the subject mark guj:");
	scanf("%d",&guj);
	
	printf("enter the subject mark com:");
	scanf("%d",&com);
	
	if(eng>=33&&hindi>=33&&math>=33&&guj>=33&&com>=33)
      {
      	totalmark=eng+hindi+math+guj+com;
	       printf("total mark:%d",totalmark);
	
	    per=totalmark/3;
	       printf("\nper :%f",per); 
	  
	  if(per>75)
		{
			printf("distinction");
		
		}
		else if((per>60)&&(per<=75))
		{
			printf("first class.");
			
		}
		else if((per>50)&&(per<=60))	
		{
			printf("second class.");
		}
		else if((per<35)&&(per<=50))
		{ 
			printf("pass class");
		}
	}

	  else
	  {
	   printf("fail in subject");
	  }
		

	return 0;
}

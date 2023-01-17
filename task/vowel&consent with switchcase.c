#include<stdio.h>
int main()
{
 char ch;
  printf("enter the alphabet:");
  scanf("%c",&ch);
  if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
  {
  	switch(ch)
  	{
	  
  	   
		 case 'a':
  	   
		 case 'e':
		 
		 case 'i':
		 
		 case 'o':
		 
		 case 'u':
		 
		 case 'A':
		 
		 case 'E':
		 
		 case 'I':
		 
		 case 'O':
		 
		 case 'U':
		    
			printf("vowel");
			break;
			
		default:
			printf("constent");}
  }
  else 
  {
  	printf("enter the valid char");
  }
  	
}

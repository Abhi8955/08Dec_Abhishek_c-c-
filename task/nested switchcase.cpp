#include<stdio.h>
int main()
{
	int choice,num;
	printf("\awelcome to amool dairy");
	printf("\n enter the 1 for milk");
	printf("\n enter the 2 for paneer");
	printf("\n enter the 3 for clarified butter");
	printf("\n enter the 4 for curd ");
	printf("\n please enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\a\n------milk------");
			printf("\n1.amool gold price:31rupees/500ml");
		    printf("\n2.amool taza price:28rupees/500ml ");
			printf("\n3.amool shakti price:22rupees/500ml");
			printf("\n4.amool powder price:644rupees/500gm");
			printf("\n please enter your choice: ");
			scanf("%d",&num);
			switch(num)
			{
				
				   	case 1:
				   	printf("\a\nyour purchsed amool gold");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 2:
				   	printf("\a\nyour purchsed amool taza");
				   	printf("\n-------thankyou-------");
				   	printf("\n---please visit again---");
				   	break;
				   	
				   	case 3:
				   	printf("\a\nyour purchsed amool shakti");
				   	printf("\n-------thankyou-------");
				   	printf("\n---please visit again---");
				   	break;
				   	
				   	case 4:
				   	printf("\ayour purchsed amool powder");
				   	printf("\n-------thankyou-------");
				   	printf("\n---please visit again---");
				   	break;
				   	default:
				   		printf("enter valid choice");
			}
				   break;
		case 2:
			printf("\a\n------paneer------");
			printf("\n1.amool simple paneer price:65rupees/200gm");
		    printf("\n2.amool vegan paneer price: 400rupees/250gm");
    		printf("\n please enter your choice:");
			scanf("%d",&num);
			switch(num)
			{
				
				   	case 1:
				   	printf("\a\nyour purchsed amool simple paneer ");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 2:
				   	printf("\a\nyour purchsed amool vegan paneer");
				   	printf("\n-------thankyou-------");
				   	printf("\n---please visit again---");
				   	break;
				   	
				   	default:
				   		printf("enter valid choice");
		   }
				   break;
		case 3:
			printf("\a\n------clarified butter------");
			printf("\n1.amool cow clarified butter price:465rupees/1kg");
		    printf("\n2.amool pure clarified butter price: 600rupees/1kg");
    		printf("\n please enter your choice:");
			scanf("%d",&num);
			switch(num)
			{
				
				   	case 1:
				   	printf("\a\nyour purchsed amool cow clarified butter  ");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 2:
				   	printf("\a\nyour purchsed amool pure clarified butter");
				   	printf("\n-------thankyou-------");
				   	printf("\n---please visit again---");
				   	break;
				   	
				   	default:
				   		printf("enter valid choice");
		   }
				   break;	  
		case 4:
			printf("\a\n------curd------");
			printf("\n1.amool simple curd price:25rupees/150gm");
		    printf("\n2.amool greek curd price:70rupees/150gm");
    		printf("\n please enter your choice:");
			scanf("%d",&num);
			switch(num)
			{
				
				   	case 1:
				   	printf("\a\nyour purchsed amool simple curd  ");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 2:
				   	printf("\a\nyour purchsed amool greek curd");
				   	printf("\n-------thankyou-------");
				   	printf("\n---please visit again---");
				   	break;
				   	
				   	default:
				   		printf("enter valid choice");
		    }
				   break;	  
		default:
				   		printf("enter valid choice");		    		    
				   
				   
				   
				  
	}
			
			
}


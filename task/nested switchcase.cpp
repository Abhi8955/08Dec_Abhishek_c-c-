#include<stdio.h>
int main()
{
	int choice,num,ab;
	printf("\awelcome to amool dairy\v");
	printf("\n enter the 1 for milk");
	printf("\n enter the 2 for paneer");
	printf("\n enter the 3 for clarified butter");
	printf("\n enter the 4 for curd \v");
	printf("\n please enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\a milk");
			printf("\n1.gold");
			printf("\n2. taza");
			printf("\n3. shakti");
			printf("\n4. powder");
			printf("\n please enter your choice: ");
			scanf("%d",&num);
			switch(num)
			{
				case 1:
					printf("\n1.amool gold price:31rupees/500ml");
				    printf("\n2.amool taza price:28rupees/500ml ");
					printf("\n3.amool shakti price:22rupees/500ml");
					printf("\n4.amool powder price:644rupees/500gm");
					printf("\n please enter your choice:");
					scanf("%d",&ab);
				   switch(ab)
				   {
				   	case 1:
				   	printf("your purchsed amool gold");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 2:
				   	printf("your purchsed amool taza");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 3:
				   	printf("your purchsed amool shakti");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   	
				   	case 4:
				   	printf("your purchsed amool powder");
				   	printf("\n-------thankyou-------");
				   	printf("\nplease visit again");
				   	break;
				   }
				  
			}
			
			
	}
}

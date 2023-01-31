#include<stdio.h>
 int main()
 {
 
 int no;
 float length,width,radius,pi,base,hight;
	printf("press No.1 for area of Triangle\n");
	printf("press No.2 for area of Rectangle\n");
	printf("press No.3 for area of circle\n");
	scanf("%d",&no);
	pi=3.14;  
    switch (no)
	{
        case 1:printf("enter Base of triangle : ");
               scanf("%f",&base);
	           printf("enter hight of triangle : ");
	           scanf("%f",&hight);
	           printf("area of triangle is %f: ",base*hight/2);
	                        break;
	    case 2:printf("enter length of rectangle : ");
			   scanf("%f",&length);
		       printf("enter width of rectangle : ");
		       scanf("%f",&width);
			   printf("area of rectangle is :%f",width*length);
			                break;
		case 3:printf("enter radius of circle : ");
			   scanf("%f",&radius);                
			   printf("area of circle is : %f",pi*radius*radius);
			                break;
	    default:{printf("invalid input");
					
				 }
				     
				  }	
}


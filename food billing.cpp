#include<stdio.h>
int main()
{
	int price,choice,q;
	char c;
	int total = 0;
	up :
	printf("----------MENU----------");
	printf("\n 1. pizza      price =180rs/pcs");
	printf("\n 2. burger     price =100rs/pcs");
	printf("\n 3. dosa       price =120rs/pcs");
	printf("\n 4. idli       price =50rs/pcs");
	printf("\n please enter your choice  : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("you selected pizaa");
			printf("\nenter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d" ,q*180);
			total = total+(q*180);
			printf("\ntotal amount : %d ",total);
			
			break;
			
		case 2 : 
			printf("you selected burger");
			printf("\nenter quantity : ");
			scanf("%d" ,&q);
			printf("\nAmount : %d" ,q*100);
			total = total+(q*100);
			printf("\ntotal amount : %d ",total);
			
			break;
			
		case 3 :
			printf("you selected dosa");
			printf("\nenter quantity : ");
			scanf("%d" ,&q);
			printf("\nAmount : %d" ,q*120);
			total = total+(q*120);
			printf("\ntotal amount : %d ",total);
			
			break;
			
		case 4 :
			printf("you selected idli");
			printf("\nenter quantity : ");
			scanf("%d" ,&q);
			printf("\nAmount : %d" ,q*50);
			total = total+(q*50);
			printf("\ntotal amount : %d ",total);
			
			break;
			
			default :
				printf("invalid input");
	}
		printf("\ndo you want order more? press 'Y'or 'N' ");
		scanf(" %c",&c);
		if(c=='Y'||c=='y')
		{
			goto up;
		} 
			
	
}

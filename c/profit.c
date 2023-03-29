#include<stdio.h>
int main()
{
	int sale;
	int base;
	int total;
	printf("enter a sale price ");
	scanf("%d",&sale);
	 
	printf("enter a base price ");
	scanf("%d",&base);
	 
	if(sale>base)
	{
		total=sale-base;
		printf(" we get %d  profit",total);
	}
	else
	{
		total=base-sale;
		printf("we get %d lose",total);
	}
	 
	 
	
	
	return 0;
}

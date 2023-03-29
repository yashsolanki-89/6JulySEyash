#include<stdio.h>
int main()
{
	int pin;
	int fix=334;
	int choice;
	int ans;
	int money;
	int bankmoney=3500;
	printf("Enter a pin :");
	scanf("%d",&pin);
	if(pin==fix)
	{
	    printf("====================\n");
	    printf("1-credit \n");
	    printf("2-debit  \n");
	    printf("====================\n");
       printf(" opening balance is %d \n", bankmoney);
	    printf("enter a choice :");
	    scanf("%d",&choice);
	    printf("enter amount :");
	    scanf("%d",&money);
	   if(choice==1)
	   {
		ans=money+bankmoney;
	   } 
	   else if(choice==2)
	   {
	   	if(money<=bankmoney)
	   	{
	   		ans=bankmoney-money;
    }
    else
    {
    	printf("invalid ");
	}
	   }
	   else
	   {
		printf("invalid choice ");
	   }
	   printf("%d ",ans);
}
	  else
	{
		printf("invalid pin");
	}

	

	
	
	
	return 0;
}

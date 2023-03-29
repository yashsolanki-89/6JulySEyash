#include<stdio.h>
int main()
{
	int curr;
	int prev;
	char choice;
	int total;
	    printf("enter a curr :");
	    scanf("%d",&curr);
	    printf("enter a prev :");
	    scanf("%d",&prev);
	    total=curr-prev;
	    printf("%d \n" ,total);
	if(curr>prev)
	{
	    printf("====================\n");
	    printf("v or V- village \n");
	    printf("c or C city  \n");
	    printf("i or I industry \n");
	    printf("====================\n");
	    printf("enter a choice :");
	    scanf("%c",&choice);
}
if(v || V)
{
	printf("%d",total*2);
}
else if(c||C)
	  {
	  	printf("%d",total*3);
	   } 
	   else if(i||I)
	   {
	   	printf("%d",total*3);
	   }
	   else
	   {
	   	printf(invalid);
	   }
	  else
	{
		printf("invalid ");
	}

	
return 0;
}

#include<stdio.h>
int main()
{
	int curr;
	int prev;
	char ch;
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
	    printf("village- v or V \n");
	    printf("city- c or C   \n");
	    printf("industry- i or I \n");
	    printf("====================\n");
	    printf("enter a choice :");
	    scanf(" %c",&ch);
	
if(ch=='v'||ch=='V')
{
	printf("%d",total*2);
}
else if(ch=='c'||ch=='C')
	  {
	  	printf("%d",total*3);
	   } 
	   else if(ch=='i'||ch=='I')
	   {
	   	printf("%d",total*3);
	   }
	   else
	   {
	   	printf("invalid1");
	   }
}
	  else
	{
		printf("invalid2 ");
	}


		
return 0;
}

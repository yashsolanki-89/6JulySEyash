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
	    scanf("%c",&ch);
    switch(ch)
    {
    	case 'v'||'V':
    		printf("%d",total*2);
    		break;
    	case 'c'||'C':
    		printf("%d",total*3);
    		break;
    	case 'i'||'I':
    		printf("%d",total*4);
    		break;
    	default:
    		printf("invalid")
	}
	  else
	{
		printf("invalid ");
	}


		
return 0;
}

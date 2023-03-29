#include<stdio.h>
int main()
{
	int i;
	int total=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
			total=total+i;
			
		}
		
}
printf("grant total %d",total);
	return 0;
}

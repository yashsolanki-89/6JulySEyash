#include<stdio.h>
int main()
{
	int pin=123;
	int num[3];
	int i;
	int k;
	for(i=0;i<3;i++)
	{
	printf("Enter the numbers :");
	scanf("%d",&num[i]);

	if(num[i] == pin)
	{
		printf("welcome to bank");
		break;
	}
	if(i==1)
	{
		printf("this the last try");
	}
}
	


	
	return 0;
}

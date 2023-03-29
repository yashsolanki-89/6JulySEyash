#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("enter a number :");
	scanf("%d",&a);
	
	printf("enter a number :");
	scanf("%d",&b);
	if(a!=b)
	{
		printf("the number are not equal");
	}
	else
	{
		printf("enter a different number");
	}
	return 0;
}

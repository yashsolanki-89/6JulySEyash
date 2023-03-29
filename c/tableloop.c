#include<stdio.h>
int main()
{
	int i;
	int no;
	
	printf("enter a number :");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++)
	{
		printf("%d %d %d \n",no,i,no*i);
	}
	return 0;
}

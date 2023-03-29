#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter First number :");
	scanf("%d",&a);
	printf("Enter Second number :");
	scanf("%d",&b);
	      printf("=======Before swaping=======\n");
	printf(" first number : %d \n second number : %d \n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	      printf("=======After swaping=======\n");
		printf(" first number : %d \n second number :%d \n",a,b);
	return 0;
}

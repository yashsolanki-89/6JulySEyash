#include<stdio.h>
oddEven(int a)
{
	if(a%2==0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int num[9]={2,3,11,14,15,21,22,24,36};
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d \n",oddEven(num[i]));
	}
	
	return 0;
}

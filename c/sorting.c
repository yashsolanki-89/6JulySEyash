#include<stdio.h>
int main()
{
	int i,a[5],temp,j;
	printf(" Enter Element : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("==========\n");
		for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}

	return 0;
}

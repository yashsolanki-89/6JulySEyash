#include<stdio.h>

int sumfunction(int a[2][2],int b[2][2])
{
	int i;
	int j;
	printf("Addition Matrix : \n\n");
 	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf(" %d",a[i][j]+b[i][j]);
		}
	printf("\n\n");
    }
}
int main()
{
	int a[2][2],i,j,sum[2][2],b[2][2];
			printf("enter  first matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i] [j]);
		}
		printf("\n\n");
    }
    printf("enter second matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			 printf("%d",b[i][j]);
		}
	printf("\n\n");
    }
 sumfunction(a[i][j],b[i][j]);
          
	return 0;
}

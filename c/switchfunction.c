#include<stdio.h>

chooseFunction()
{
   printf("===================== \n");
   printf("1-sum \n");
   printf("2-sub \n");
   printf("===================== \n");
}
subFunction(int a,int b)
{
	return a-b;
}
sumFunction(int a,int b)
{
	return a+b;
}

int main()
{
int a;
int b;
int choose;
chooseFunction(); 

printf("CHOOSE A NUMBER : ");
scanf("%d",&choose);

printf("ENTER A NUMBER 1: ");
scanf("%d",&a);	
printf("ENTER A NUMBER 2: ");
scanf("%d",&b);	

switch(choose)
{
	case 1:
	      printf("%d",sumFunction(a,b));
	      break ;
	case 2:
		printf(" %d ",subFunction(a,b));
		break ;
	default :
		printf("invalid");
		break ;
}
return 0;
}

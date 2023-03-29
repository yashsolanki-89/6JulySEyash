#include<stdio.h>
int main()
{
/*
ternary operator
int age=29
condition? true part:false part
age>=18?printf(""):printf("")
*/
int n;
int a=10;
int b=20;
 int total; 
printf("enter choose :");
scanf("%d",&n);
switch(n)
{
	case 1:
	total=a+b;
	printf("%d",total);
	break;
	case 2:
	total=a-b;
	printf("%d",total);
	break ;
	default :
	printf("invalid");	
}
return 0;
}

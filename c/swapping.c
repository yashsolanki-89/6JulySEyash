#include<stdio.h>
 int main()
 {
 	int a=12;
 	int b=32;
 	int temp;
 	
 	temp=a;
 	a=b;
 	b=temp;
 	printf("value of A %d \n",a);
 	printf("value of b %d \n",b);
 	return 0;
 }

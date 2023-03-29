#include<stdio.h>
int main()
{
	printf("1 : banana \n");
    printf("2 : apple  \n");
    printf("3 : orange \n");



	int choose;
	printf("enter a number :");
	scanf("%d",&choose);
	if(choose==1)
	{
		FILE *banana;
        char ch;
        banana = fopen("banana.txt","r");


       while(!feof(banana))
       {
       ch = getc(banana);
        printf("%c",ch);
        }
	}
	else if(choose==2)
	{
	FILE *apple;
    char ch;
    apple = fopen("apple.txt","r");
    while(!feof(apple))
  {
    ch = getc(apple);
    printf("%c",ch);
}
	}
	else if(choose==3)
	{
    FILE *orange;
    char ch;
    orange = fopen("orange.txt","r");
    while(!feof(orange))
    {
     ch = getc(orange);
     printf("%c",ch);
     }
		
	}
	else
	{
		printf("invalid");
	}
	return 0;
}

#include<stdio.h>
int main()
{
// permenat store data - .txt with File Handling
// create pointer variable with File - overright - new
// fopen with mode - w,r,a
// process
// close file

FILE *banana;
char ch;
banana = fopen("banana.txt","r");


while(!feof(banana))
{
ch = getc(banana);
printf("%c",ch);
}


return 0;
}



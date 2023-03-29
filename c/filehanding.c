#include<stdio.h>


int main()
{
// permenat store data - .txt with File Handling
// create pointer variable with File - overright - new
// fopen with mode - w,r,a
// process
// close file

FILE *yashFile;
char ch;
yashFile = fopen("yash.txt","w");
fprintf(yashFile,"%s","technology");
fclose(yashFile);


while(!feof(yashFile))
{
ch = getc(yashFile);
printf("%c",ch);
}


return 0;
}



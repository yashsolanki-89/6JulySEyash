#include<iostream>
using namespace std;

int main()
{
	char str[20];
	int i,len=0;
	cout<<"Enter name :";
	gets(str);
 	
   for(i=0;str[i]!='\0';i++)
   {
   	len++;
   }
	cout<<"Length :"<<len;
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20];
	int i,len=0;
	cout<<"Enter name :";
	gets(str);
	
	len=strlen(str);
 	
   for(i=len;i>=0;i--)
   {
   	cout<<str[i];
   }
	
	return 0;
}

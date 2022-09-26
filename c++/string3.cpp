#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char str[20];
	int i,num=0 ;
	
	cout<<"Enter name :";
	gets(str);
	
	for(i=0;i<str[i];i++)
	{
		if((str[i]>='0' && str[i]<='9'))
		{
			num++;
			
		}
	}
	cout<<"number of  digits in  char :"<<num;
return 0;
}

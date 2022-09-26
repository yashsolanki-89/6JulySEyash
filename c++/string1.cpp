#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char str[20];
	int len=0;
	int count=0 ,i ,space=0;
	
	cout<<"Enter name :";
	gets(str);
	
	 
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(len!=i)
		{
			count++;			
		}
	}
	cout<<"number of char :"<<count<<endl;
	for(i=0;i<=str[i];i++)
	{
		if(str[i]==' ')
		{
			space++;
		}
	}
	cout<<"number of space :"<<space;
	return 0;
}

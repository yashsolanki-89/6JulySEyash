#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char str[20];
	int upper=0 ,i ,lower=0;
	
	cout<<"Enter name :";
	gets(str);
	
	for(i=0;i<str[i];i++)
	{
		if(isupper(str[i]))
		{
			upper++;
			
		}
	}
	cout<<"number of  upper  char :"<<upper<<endl;
	for(i=0;i<=str[i];i++)
	{
		if(islower(str[i]))
		{
			lower++;
		}
	}
	cout<<"number of  lower space :"<<lower;
	return 0;
}

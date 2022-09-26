#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20],str1[20];
	int i;
	
	cout<<"Enter name :";
	gets(str);
	
    cout<<"Enter name :";
	gets(str1);
	
	if(strcmp(str,str1)==0)
	{
		cout<<"both are same ";
	}
	else
	{
		cout<<"Not a same";
	}
	
	return 0;
}

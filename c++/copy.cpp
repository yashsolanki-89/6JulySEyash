#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20],str1[20];
	int i;
	
	cout<<"Enter name :";
	gets(str);
	
	strcpy(str1,str);
	cout<<"string :"<<str1;
	return 0;
}

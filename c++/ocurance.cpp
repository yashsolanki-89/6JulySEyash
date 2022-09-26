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
	
 cout<<"Result :"<<strstr(str,str1);
	return 0;
}

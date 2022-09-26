#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20];
	int c,i,len,temp;
	
	cout<<"Enter name :";
	gets(str);
	
     
	len=strlen(str);
 	
   for(i=0;i<=len/2;i++)
   {
   	if(str[i]==str[len-i-1])
   	c++;
   }
   if(c==i)
   {
   	cout<<"palidrom";
   }
   else 
   {
   	 cout<<"not a palidrom";
   }
    return 0;
}	


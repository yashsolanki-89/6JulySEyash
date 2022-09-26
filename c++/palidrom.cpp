#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20];
	int i,len,temp;
	
	cout<<"Enter name :";
	gets(str);
	
     
	len=strlen(str);
 	
   for(i=0;i<=len/2;i++)
   {
   	  temp=str[i];
      str[i]=str[len-1];
	  str[len-1]=temp;
	  
	  len--;	    
   }
   cout<<str;
    return 0;
}	


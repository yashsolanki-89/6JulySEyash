#include<iostream>
using namespace std;
int main()
{ 
int choose;
int a;
int b;

    cout<<"Enter number 1 : ";
    cin>>a;
    
    cout<<"Enter number 2 : ";
    cin>>b;
    
    cout<<endl;
    
	cout <<"MENU" << endl; 
	cout<< "1 : Addition" << endl ;
    cout<< "2 : substration" << endl ;
    cout<< "3 : multiplication" << endl ;
    cout<< "4 : division" << endl ;
    
    cout<<endl;
    
    cout<<"Choose the method :";
    cin>>choose;
    
    if(choose==1)
    {
    	cout<<a+b;
	}
	else if(choose==2)
	{
		cout<<a-b;
	}
	else if(choose==3)
	{
		cout<<a*b;
	}
	else if (choose==4)
	{
		cout<<a/b;
	}
	else
	{
		cout<<"invalid";
	}
	
    return 0;
}


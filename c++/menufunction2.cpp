#include<iostream>
using namespace std;
int main()
{ 
    int choose;
	cout <<"MENU" << endl; 
	cout<< "1 : triagnle" << endl ;
    cout<< "2 : Rectangle" << endl ;
    cout<< "3 : circle "<< endl ;
    
    cout<<endl;
    
    cout<<"Enter choice to find area of any shape given :";
    cin>>choose;
    
    if(choose==1)
    {
    	int a;
    	int b;
    	
		cout<<"Enter base : ";
        cin>>a;
    
        cout<<"Enter height : ";
        cin>>b;
     	
    	cout<<a*b/2;
	}
	else if(choose==2)
	{
		int c;
		int d;
		cout<<"Enter witdh : ";
        cin>>c;
    
        cout<<"Enter length : ";
        cin>>d;
     
		cout<<c*d;
	}
	else if(choose==3)
	{
	    int r;
    	
		cout<<"Enter radius : ";
        cin>>r;
        
        cout<<3.14*r*r;
     
	}
	else
	{
		cout<<"invalid";
	}
	
    return 0;
}

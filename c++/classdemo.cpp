#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		
		void display()
		{
				
		  cout<<"Enter a num :";
	   	  cin>>a;
	
			cout<<"A = "<<a;
		}
};

/*void A::display()
{
	  cout<<"Enter a num :";
	  cin>>a;
	
	cout<<"A = "<<a;
}*/
int main()
{
	A display;
	
	display.display();
	
	return 0;
}

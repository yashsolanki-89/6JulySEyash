#include<iostream>
using namespace std;

class parent
 {
	public:
	 string name;	
	void displayA()
	{
		cout<<"class A"<<endl;
	}
	};
class child : public parent
 {
	public :
		
	void displayB()
	{
		cout<<name;
     	cin>>name;
     	cout<<name;
	}
};
int main()
{
	child obj;
	obj.displayA();
	obj.displayB();
	
	return 0;
}

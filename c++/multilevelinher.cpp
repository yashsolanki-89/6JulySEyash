#include<iostream>
using namespace std;

class parent
 {
	public:
	 int a;	
	};
class parent2 : public parent
 {
	public :
		int b;
	void displayB()
	{
		cout<<"Enter number :";
		cin>>a;
		cout<<"Enter number :";
		cin>>b;
		
	}
};
class child :public parent2
{
	public :
		void input()
		{
			cout<<a+b;
			
		}
};
int main()
{
	child obj;
	obj.displayB();
	obj.input();
	
	return 0;
}

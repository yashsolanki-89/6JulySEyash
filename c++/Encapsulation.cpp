#include<iostream>
using namespace std;

class A
{
	public :
		string name;
		void getdata()
		{
			cout<<"Enter a name :";
			cin>>name;
		}
		void setdata()
		{
			cout<<"Name :"<<name;
		}
};

int main()
{
	A name;
	
	name.getdata();
	name.setdata();
	
	return 0;
}

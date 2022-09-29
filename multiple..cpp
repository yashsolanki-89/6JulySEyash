#include<iostream>
using namespace std;
class run{
	public :
		int run;
		void rundisplay()
		{
			cout<<"Enter the run :";
			cin>>run;
		}
};
class over{
	public :
		int over;
		void overdisplay()
		{
				cout<<"Enter the over :";
			    cin>>over;
		}
};
class c : public run,public over{
	public :
		string name ;
		int age;
		void display()
		{
			
				cout<<"Enter the name :";
			    cin>>name;
			    cout<<"Enter the age :";
			    cin>>age;
			    cout<<"============================="<<endl;
			    cout<<"Name :"<<name<<endl;
			    cout<<"Age :"<<age<<endl;
			    cout<<"Run :"<<run<<endl;
			    cout<<"Over :"<<over<<endl;
		}
};

int main()
{
	c obj;
	obj.rundisplay();
	obj.overdisplay();
	obj.display();
	return 0;
}

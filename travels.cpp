#include<iostream>
using namespace std;
class A{
	public :
		
		string name,email,address;
		int age,contact;
	void display()
	{
		cout<<"----------Welcome to Ahemdabad travels------------"<<endl<<endl;
		
		cout<<"1 : SG highway"<<endl;
		cout<<"2 : geeta mandir"<<endl;
		cout<<"3 : CG road"<<endl;
		cout<<"4 : Gota chowkdi"<<endl;
		cout<<"5 : River front"<<endl;
		cout<<endl;
		cout<<"Wanna Explore more ? (y/n)"<<endl<<endl;
	}
};
class b
    {
    	public :
    	string name,email,address,username;
		int age,contact,password;

    	void registration()
		{
	
			cout<<"------------Registration-------"<<endl<<endl;
			
			cout<<"Name :";
			cin>>name;
			
			cout<<"Age :";
			cin>>age;
			
			cout<<"Contact :";
			cin>>contact;
			
			cout<<"Email :";
			cin>>email;
			
			cout<<"Address :";
			cin>>address;
	        cout<<endl;
	        cout<<"------Enter some login Credentials------ "<<endl<<endl;
			
			cout<<"Username :";
			cin>>username;
			
			cout<<"Password :";
			cin>>password;
			cout<<endl;
			cout<<"-----Registration Done---- "<<endl<<endl;

	    }
	};
	class c: public b{
	public :
	void login()
	{
					string u;
					int p;	
		     cout<<"-------login-----"<<endl<<endl;
			
			cout<<"Username :";
			cin>>u;
			
			cout<<"Password :";
			cin>>p;
			cout<<endl;
			if(username==u&&password==p)
			{
				cout<<"login Donee";
			}				   	
			else
			{
				cout<<"invalid";
				}	
   }
};


int main()
{
	char choose;
	
	A obj ;
	b obj1;
	c login;
	obj.display();
	
	cout<<choose;
	cin>>choose;
	if(choose=='y')
	{

		login.registration();
		login.login();
	}
	else
	{
		cout<<"thank you";
	}
 return  0;
}

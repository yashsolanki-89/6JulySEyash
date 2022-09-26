#include<iostream>
using namespace std;
class A{
	public :
		char a;
		string name,email,address,username,u;
		int age,contact,password ,p;
	void travels()
	{
		cout<<"----------Welcome to Ahemdabad travels------------"<<endl<<endl;
		
		cout<<"1 : SG highway"<<endl;
		cout<<"2 : geeta mandir"<<endl;
		cout<<"3 : CG road"<<endl;
		cout<<"4 : Gota chowkdi"<<endl;
		cout<<"5 : River front"<<endl;
		cout<<endl;
		cout<<"Wanna Explore more ? (y/n)"<<endl<<endl;
		
		cout<<"Enter choose : ";
		cin>>a;
		cout<<endl;
				if(a=='y')
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
		else
		{
			cout<<"Thank you ";
		}

	}
};

int main()
{
	A display ;
	display.travels();
 return  0;
}

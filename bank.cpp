#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
	int acc_no;
	float bal,a,b;
	public:
		bank()
		{
			bal=1000;
		}
		void input()
		{
			cout<<"Enter the Acc_no\n";
			cin>>acc_no;
	}
	void show()
	{
			cout<<"current balance:"<<bal<<endl;
	}
		void deposit()
		{
			cout<<"enter money to deposit\n";
			cin>>a;
			bal=bal+a;
		}
		void withdraw()
        {
        	cout<<"enter money to withdraw\n";
        	cin>>b;
        	if((bal-b)<1000)
        	cout<<"low balance transaction failed\n";
        	else
        	
        	bal=bal-b;
		 } 
		 ~bank()
		 {
		 }
	};
		 int main()
{
	char x;
	bank obj;
	obj.input();
	obj.show();
	cout<<"do u want to deposit?\n press y for deposit else n\n";
	cin>>x;
	if(x=='y'||x=='Y')
	{
	obj.deposit();
	obj.show();
	goto start;
}
	else
	{
		start:
	cout<<"do u want to withdraw?\n press y for withdraw else n\n";
	
	cin>>x;
	if(x=='y'||x=='Y')
{
		obj.withdraw();
	obj.show();
	}
	else
	obj.show();
}
getch();
return 0;
}

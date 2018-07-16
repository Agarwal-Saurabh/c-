#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	protected:
		int roll_no;
		char name[20];
		int p,c,m;
		float avg;
		void input()
		{
			cout<<"enter yr record\n";
			cin>>roll_no;
			cin.get();
			cin.getline(name,20);
		}
		void show()
		{
			cout<<"your roll no="<<roll_no<<endl;
		    cout<<"your name ="<<name<<endl;
			cout<<"your average="<<avg<<endl;
			if(avg>=33)
			cout<<"pass\n";
			else
			cout<<"fail\n";
		}
	};
		class result:student
		{
			public:
				void calculate()
				{
					input();
					cout<<"enter your marks\n";
					cin>>p>>c>>m;
					avg=(p+c+m)/30;
				}
				void print()
				{
					show();
				}
		};
int main()
{
	result ob1;
	ob1.calculate();
	ob1.print();
	getch();
	return 0;
}
								

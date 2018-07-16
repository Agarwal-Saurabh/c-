#include<conio.h>
#include<iostream>
using namespace std;
class demo
{
	char name[20];
	public:
		void input()
		{
			cout<<"enter your name\n";
			cin.getline(name,20);
		}
		char & operator[](int index)
		{
			return name[index];
		}
		void output()
		{
			cout<<"name is "<<name<<endl;
		}
	};
		int main()
		{
			demo d1;
			d1.input();
			d1.output();
			cout<<d1[0]<<endl;
			cout<<d1[2]<<endl;
			d1[0]='b';
			d1.output();
		}

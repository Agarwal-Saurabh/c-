#include<conio.h>
#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		virtual void input()
		{
			cout<<"Enter 2 number class A\n\a";
			cin>>a>>b;
		}
};
class B:public A
{
	public:
		int r,s;
		void input()
		{
			cout<<"Enter 2 no classB\n";
			cin>>r>>s;
		}
};
int main()
{
	
	A *p,ob1;
	B ob2;
	p=&ob1;
	p->input();
	p=&ob2;
	p->input();
	getch();
	return 0;
}

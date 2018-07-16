#include<conio.h>
#include<iostream>
using namespace std;
class demo
{
	int a,b,c;
	friend void input(demo &t);
	friend void output(demo);
};
void input(demo &t)
	{
		cout<<"enter 3 values\n";
		cin>>t.a>>t.b>>t.c;
	}
	void output (demo t) 
	{
		cout<<"values are\n";
		cout<<t.a<<t.b<<t.c;
	}
	int main()
	{
		demo d1;
		input(d1);
		output(d1);
		getch();
		return 0;
	}

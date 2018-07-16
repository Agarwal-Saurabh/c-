#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		virtual void area()=0;
		virtual void perimeter()=0;
};
class rectangle:public A
{
	int l,b;
	public:
	void input()
	{
		cout<<"Enter length & breadth\n";
		cin>>l>>b;
	}
	void area()
	{
		cout<<"Area="<<l*b<<endl;
	}
	void perimeter()
	{
		cout<<"perimetre:"<<2*(l+b)<<endl;
	}
};
class circle:public A
{
	int r;
	public:
		void input()
		{
			cout<<"Enter radius\n";
			cin>>r;
		}
		void area()
		{
			cout<<"area="<<3.14*r*r<<endl;
		}
		void perimeter()
		{
			cout<<"peri of circle:"<<2*3.14*r;
		}
};
class square:public A
{
	int side;
	public:
		void input()
		{
			cout<<"Enter side\n";
			cin>>side;
		}
		void area()
		{
			cout<<"area of sq="<<side*side<<endl;
		}
		void perimeter()
		{
			cout<<"peri of sq="<<4*side<<endl;
		}
};
int main()
{
	A *p;
	rectangle r1;
	circle c1;
	square s1;
	r1.input();
	p=&r1;
	p->area();
	p->perimeter();
	c1.input();
	p=&c1;
	p->area();
	p->perimeter();
	s1.input();
	p=&s1;
	p->area();
	p->perimeter();
	getch();
	return 0;
}

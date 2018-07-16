#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		int a,b;
		A(int r,int k)
		{
			a=r;b=k;
			cout<<"constructor of class A\n"<<endl;
		}
	    ~A()
	    {
	    	cout<<"destrctor of class A\n";
		}
};
class B:A
{
	public:
		int p,q;
		B(int x,int y):A(x,y)
		{
			p=x;
			q=y;
			cout<<"constructr of class B\n";
		}
		~B()
		{
			cout<<"Destructor of class B\n";
		}
};
int main()
{
	B ob1(1,2);
	getch();
	return 0;
}

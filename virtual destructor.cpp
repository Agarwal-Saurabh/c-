#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		int *p;
		A()
		{
			p=new int[5];
			cout<<"constructor of class A\n"<<endl;
		}
	    ~A()
	    {
	    	delete []p;
	    	cout<<"destrctor of class A\n";
		}
};
class B:public A
{
	public:
		int *q;
		B()
		{
			q=new int[5];
			cout<<"constructr of class B\n";
		}
		~B()
		{
			delete []q;
			cout<<"Destructor of class B\n";
		}
};
int main()
{
   A *p=new A();
   delete p;
   
   B *q=new B();
   delete q;
   A *z=new B();
   delete z;
   getch();
}

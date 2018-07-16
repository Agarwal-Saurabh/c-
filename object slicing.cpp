#include<conio.h>
#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
		public:
			void input()
			{
				cout<<"enter 2 no\n";
				cin>>a>>b;
			}
			void show()
			{
				cout<<a<<" "<<b<<endl;
			}
};
class B:public A
{
	public:
		void largest()
		{
			input();
			if(a>b)
			{
				cout<<a<<"is largest\n";
			}
			
			else
			cout<<b<<"is largest\n";
		}
};
int main()
{
	A ob1;
	B ob2;
	ob2.largest();
	ob1=ob2;//object slicing
	ob1.show();
	getch();
	return 0;
}


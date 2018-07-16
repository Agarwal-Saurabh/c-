#include<conio.h>
#include<iostream>
using namespace std;
class demo
{
	int p,q;
	public:
		demo()
		{
			p=0,q=0;
			cout<<"default constructor\n";
		}
		void print()
		{
			cout<<p<<"\t"<<q<<endl;
		}
	};
	int main()
	{
		demo();
		demo().print();
		demo ob1;
		ob1.print();
		demo ob2=demo();
		ob2.print();
		getch();
		return 0;
	}

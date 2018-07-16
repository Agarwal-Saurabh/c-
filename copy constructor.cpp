#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int p,q,r;
	public:
		demo()
		{
			p=1,q=1,r=1;
			cout<<"default constructor\n";
		}
		demo(int x,int y,int z)
		{
			p=x,q=y,r=z;
			cout<<"argumented constructor\n";
		}
		demo(const demo &temp)
		{
			cout<<"copy constructor\n"<<endl;
			p=temp.p;
			q=temp.q;
		}
		void show()
		{
			cout<<p<<"\t"<<q<<"\t"<<r<<endl;
		}
	};
	int main()
	{
		demo d1;
		demo d2(100,200,300);
		demo d3=d2;
		demo d4(d1);
		d1.show();
		d2.show();
		d3.show();
		d4.show();
		demo d5;
		d5=d4;
		d5.show();
		getch();
		return 0;
	}

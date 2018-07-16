#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int a,b,c;
	public:
		void input()
		{
			cout<<"enter 3 values\n";
			cin>>a>>b>>c;
		}
		void output()
		{
			cout<<"values r\n";
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		demo operator++()
		{
			demo temp;
			temp.a=++a;
			temp.b=++b;
			temp.c=++c;
			return temp;
		}
		demo operator++(int)
		{
			demo temp;
			temp.a=++a;
			temp.b=++b;
			temp.c=++c;
			return temp;
		}
	};
	int main()
	{
		demo d1,d2,d3;
		d1.input();
		++d1;
				d1.output();
			d2=d1++;
			d3=++d2;
			d1.output();
			d2.output();
			d3.output();
			getch();
			return 0;
		}

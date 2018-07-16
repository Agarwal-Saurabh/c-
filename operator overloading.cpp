#include<conio.h>
#include<iostream>
using namespace std;
class example
{
int a,b,c;
public:
	void input()
	{
		cout<<"enter 3 values";
		cin>>a>>b>>c;
	}
		void output()
		{
			
			cout<<"values are\n";
			cout<<a <<b <<c;
		}
		example operator-(example t)
		{
			example temp;
			temp.a=a-t.a;
			temp.b=b-t.b;
			temp.c=c-t.c;
			return temp;
		}
	};
	int main()
	{
		example e1,e2,e3;
		e1.input();
		e2.input();
		e3=e1.operator-(e2);
		e1.output();
		e2.output();
		e3.output();
		getch();
		return 0;
	}

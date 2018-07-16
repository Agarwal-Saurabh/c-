#include<conio.h>
#include<iostream>
using namespace std;
class number
{
	int a,b,c;
	friend class operation;
};
class operation
{
	public:
		void input(number &t)
		{
			cout<<"enter 3 values\n";
			cin>>t.a>>t.b>>t.c;
		}
		void large(number t)
		{
			int max;
			max=t.a;
			if(max<t.b)
			max=t.b;
			if(max<t.c)
			max=t.c;
			cout<<"largest"<<max;
		}
	};
	int main()
	{
		number n1;
		operation ob1;
		ob1.input(n1);
		ob1.large(n1);
		getch();
		return 0;
	}

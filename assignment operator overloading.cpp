#include<iostream>
#include<conio.h>
using namespace std;
class example1
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
			cout<<"values are\n";
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		example1 operator=(example1 t)
		{
			a=t.a;
			b=t.b;
			c=t.c;
			return *this;
		}
};
int main()
{
	example1 ob1,ob2;
	ob1.input();
	ob1.output();
	ob2=ob1;
	ob2.output();
	getch();
	return 0;
}

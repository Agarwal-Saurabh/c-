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
		cout<<"values are\n";
		cout<<a<<" "<<b<<" "<<c;
	}
	bool operator > (demo temp);
};
bool demo::operator >(demo temp)
{
	if(a+b+c>temp.a+temp.b+temp.c)
	return true;
	else
	return false;
}
int main()
{
	demo d1,d2;
	d1.input();
	d2.input();
	bool r;
	r=d1>d2;
	if(r==true)
	cout<<"object 1 sum is big";
	else
	cout<<"object 2 sum is big";
	getch();
	return 0;
}

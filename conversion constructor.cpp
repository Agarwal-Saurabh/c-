#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int a;
	char b;
	float c;
	public:
		demo(int x)
		{
			a=x;
			cout<<"conv. from int to object\n";
		}
		demo(char x)
		{
			b=x;
			cout<<"conv. from char to object\n";
		}
		demo(float x)
		{
			c=x;
			cout<<"conv. from float to object\n";
		}
		demo()
		{
		}
		void output()
		{
			cout<<a<<","<<b<<","<<c<<endl;
		}
};
int main()
{
	int p=1;
	char q='a';
	float r=90.9;
    demo d1;
    d1=p;
    d1=q;
    d1=r;
    d1.output();
    getch();
    return 0;
}

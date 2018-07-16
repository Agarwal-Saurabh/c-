#include<iostream>
#include<conio.h>
using namespace std;
class example
{public:
	int a,b,c;
	friend ostream &operator<<(ostream &dou,example T);
	friend istream &operator>>(istream &di,example &T);
};
ostream &operator<<(ostream &dou,example T)
{
	dou<<T.a<<" "<<T.b<<" "<<T.c<<endl;
return dou;
}
istream &operator>>(istream &di,example &T)
{
	di>>T.a>>T.b>>T.c;
	return di;
}
int main()
{
	example ob1	,ob2;
	cout<<"enter the values\n";
	cin>>ob1;
		cout<<"enter the values\n";
	cin>>ob2;
	cout<<"valueas are\n";
	cout<<ob1;
		cout<<"valueas are\n";
	cout<<ob2;
	getch();
	return 0;
}

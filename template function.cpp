#include<iostream>
using namespace std;
#include<conio.h>
template<typename z>
z large(z a,z b)
{
	z max;
	if(a>b)
	max=a;
	else
	max=b;
	return max;
}
template<typename z>
z large(z a,z b,z c)
{
	z max;
	if(a>b&&a>c)
	max=a;
	else if(b>c)
	max=b;
	else
	max=c;
	return max;
}
int main()
{
	int a,b,c,max;
	cout<<"Enter 3 no's\n";
	cin>>a>>b>>c;
	max=large(a,b);
	cout<<"Largest:"<<max<<endl;
	max=large(a,b,c);
	cout<<"largest="<<max<<endl;
	getch();
}

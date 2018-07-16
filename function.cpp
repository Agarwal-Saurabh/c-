#include<conio.h>
#include<iostream>
using namespace std;
int sum();
int main()
{
	int s;
	s=sum();
	cout<<"sum="<<s;
	return 0;
}
int sum()
{
	int a,b,s;
	cout<<"enter 2 no.\n"<<endl;
	cin>>a>>b;
	s=a+b;
	return s;
}

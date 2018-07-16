#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double*p,q;
	p=&q;
	cout<<(unsigned int)*p<<endl;				
	p++;
	cout<<(unsigned int)*p<<endl;
	p=p+10;
	cout<<(unsigned int)*p<<endl;
	p=p-11;
	cout<<(unsigned int)*p<<endl;
	getch();
	return 0;
}


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	float avg;
	int *p,*q,*r;
	p=&a,q=&b,r=&c;
	cout<<"enter no"<<endl;
	cin>>*p>>*q>>*r;
	avg=(float)(*p+*q+*r)/3;
	cout<<"avg="<<avg;
	getch();
	return 0;
	
}

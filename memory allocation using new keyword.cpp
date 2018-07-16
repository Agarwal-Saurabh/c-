#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int *p=new int(0);
int *q=new int(10);
int *r=new int(20);
if(p==NULL||q==NULL||r==NULL)
{
	cout<<"insufficient memory";
	getch();
	exit(1);
}
cout<<*p<<"\t"<<*q<<"\t"<<*r<<endl;
int sum;
cout<<"enter 3 values"<<endl;
cin>>*p>>*q>>*r;
sum=*p+*q+*r;
cout<<"sum="<<sum;
getch();
return 0;
}

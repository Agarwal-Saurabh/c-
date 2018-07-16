#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p=new int(0);
	int *q=new int(10);
	int *r= new int(20);
	if (p==NULL||q==NULL||r==NULL)
	{
		cout<<"insufficient";
		getch();
		exit(1);
	}
	cout<<*p<<"\t"<<*q<<"\t"<<*r<<"\n";
	int sum;
	cout<<"entr 3 no,\n";
	cin>>*p>>*q>>*r;
	sum=*p+*q+*r;
	cout<<"sum="<<sum;
	getch();
	return 0;
}


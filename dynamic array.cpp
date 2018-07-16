#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int *p,size;
	int i;
	cout<<"enter size"<<endl;
	cin>>size;
	p=new int[size];
	if(p==NULL)
	{
		cout<<"insufficient"<<endl;
		getch();
		exit(1);
	}
	cout<<"enter array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>p[i];
	}
	cout<<"the array"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<p[i]<<" ";
	}
	getch();
}


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p,size;
	int i;
	cout<<"enter size of array\n";
	cin>>size;
	p=new int[size];
	if(p==NULL)
	{
		cout<<"insufficient memory\n";
		getch();
		exit(1);
	}	cout<<"enter array\n";
	for(i=0;i<size;i++)
	{
		cin>>p[i];
		
	}
	
	cout<<"the array of element\n";
	for(i=0;i<size;i++)
	{
		cout<<p[i]<<" ";
	}
	getch();
    return 0;
}
		

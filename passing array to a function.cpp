#include<conio.h>
#include<iostream>
using namespace std;
void input(int *p,int size)
{
	int i;
	cout<<"enter the array\n";
	for(i=0;i<size;i++)
	cin>>p[i];
}
void output(int *p,int size)
{
	int i;
	cout<<"the array\n";
	for(i=0;i<size;i++)
	cout<<p[i]<<" ";
}
int main()
{
	int a[5];
	input(a,5);
	output(a,5);
	getch();
	return 0;
}

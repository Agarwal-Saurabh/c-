#include<conio.h>
#include<iostream>
using namespace std;
int *array(int &size)
{
static int a[5]={1,2,3,4,5};
	size=5;
	return a;
}
int main()
{
	int *p,size;
	p=array(size);
	int i;
	for(i=0;i<size;i++)
	cout<<p[i]<<" ";
	getch();
	return 0;
}


#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int A =10;
	char B='c';
	float c=9.9;
	void*p;
	p=&A;
	*(int*)p=20;
	cout<<*(int *)p<<endl;
	getch();
	return 0;
}

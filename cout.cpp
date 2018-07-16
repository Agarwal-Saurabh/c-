#include<iostream>
#include<conio.h>
using namespace std;
int a=100;
	int main()
	{
		cout<<a<<endl;
		int a=10;
		{
			int a=5;
		cout<<a<<endl;
		}
		cout<<a<<endl;
	cout<<::a;
	getch();
	}


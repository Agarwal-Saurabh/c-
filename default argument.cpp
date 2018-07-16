#include<conio.h>
#include<iostream>
using namespace std;
void line(char p= '*',int n=10);
void line(char p,int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<p;
	}
	cout<<endl;
}
int main()
{
	line();
	line('$');
	line('$',5);
	getch();
	return 0;
}

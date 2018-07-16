#include<conio.h>
#include<iostream>
using namespace std;
void factorial()
{
	int n,f=1,i;
	cout<<"enter a no.\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"factorial="<<f<<endl;
}
int main()
{
	factorial();
	getch();
	return 0;
}

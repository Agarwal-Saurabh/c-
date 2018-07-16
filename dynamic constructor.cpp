#include<iostream>
#include<conio.h>
using namespace std;
class array
{
	int *p,size;
	public:
		array(int s)
		{
			size=s;
			p=new int[size];
			if(p==NULL)
			{
				cout<<"insufficient\n";
				getch();
				exit(1);
			}
		}
		void input();
		void output();
};
	void array::input()
	{
		int i;
		cout<<"Enter the array\n";
		for(i=0;i<size;i++)
		cin>>p[i];
	}
	void array::output()
	{
		int i;
		cout<<"array\n";
		for(i=0;i<size;i++)
		cout<<p[i]<<" ";
	}
int main()
{
	array obj1(5);
	int x;
	obj1.input();
	obj1.output();
	cout<<"enter the size\n";
	cin>>x;
	array obj2(x);
	obj2.input();
	obj2.output();
	getch();
	return 0;
}


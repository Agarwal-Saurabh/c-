#include<conio.h>
#include<iostream>
#include<stdlib.h>
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
		cout<<"enter the array\n";
		for(i=0;i<size;i++)
		cin>>p[i];
	}
	void array::output()
	{
		int i;
		cout<<"the array\n";
		for(i=0;i<size;i++)
		cout<<p[i]<<" ";
	}
	int main()
	{
		array ob1(5);
		int x;
		ob1.input();
		ob1.output();
		cout<<"\nenter the  size\n";
		cin>>x;
		array ob2(x);
		ob2.input();
		ob2.output();
		getch();
		return 0;
	}

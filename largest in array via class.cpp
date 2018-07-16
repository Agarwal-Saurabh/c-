#include<iostream>
#include<conio.h>
using namespace std;
class array
{
	int a[5],max,i;
	public:
		array()
		{
			max=0;
		}
		void input()
		{
			cout<<"enter details\n";
			for(i=0;i<5;i++)
			cin>>a[i];
			
		}
		void large()
		{
			max=a[0];
			for(i=1;i<5;i++)
			{
				if(max>=a[i])
				continue;
				else
				max=a[i];
			}
			cout<<"max:"<<max<<endl;
		}
		~array()
		{
		}
		};
		int main()
		{
			array obj;
			obj.input();
			obj.large();
			getch();
			return 0;
		}


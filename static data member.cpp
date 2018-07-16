#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	static int count;
	public:
		demo()
		{
			count++;
		}
		~demo()
		{
			count--;
		}
		void show()
		{
			cout<<"total objects ="<<count<<endl;
		}
	};
	int demo::count;
	int main()
	{
		{
		demo d1,d2,d3;
		d1.show();
	    }
	demo d4;
	d4.show();
	getch();
	return 0;
	}

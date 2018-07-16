#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	int a;
	public:
		void get(int x)
		{
			a=x;
		}
		void add(sum &t)
		{
			int sum;
			sum=t.a+this->a;
			cout<<"sum:"<<sum;
		}
	};
	int main()
	{
		sum obj1,obj2;
		obj1.get(10);
		obj2.get(20);
		obj1.add(obj2);
		getch();
		return 0;
	}

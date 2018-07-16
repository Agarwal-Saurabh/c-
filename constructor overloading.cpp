#include<iostream>
#include<conio.h>
using namespace std;
class salary
{
	int basic,ta ,da;
	int total;
	public:
		salary()
		{
			basic=9000,ta=0,da=0;
			total=basic+ta+da;
		}
		salary(int t)
		{
			basic=9000,ta=t,da=0;
			total=basic+ta+da;
		}
		salary(int t,int d)
		{
			basic=9000,ta=t,da=d;
			total=basic+ta+da;
		}
		void show()
		{
			cout<<"basic salary="<<basic<<endl;
			cout<<"ta ="<<ta<<"da="<<da<<endl;
			cout<<"total salary"<<total<<endl;
		}
	};
	int main()
	{
		salary ob1;
		salary ob2(1000);
		salary ob3(1000,2000);
		ob1.show();
			ob2.show();
			ob3.show();
			getch();
			return 0;
		}

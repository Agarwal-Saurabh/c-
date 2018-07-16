#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int id;
	char name[20];
	public:
		employee(int i=-999,char *nm="not specified")
		{
			id=i;
			strcpy(name,nm);
		}
		void output()
		{
			cout<<id<<"\t"<<name<<endl;
		}
	};
	int main()
	{
		employee emp1;
		employee emp2(101);
		employee emp3(102,"arun");
		emp1.output();
		emp2.output();
		emp3.output();
		getch();
		return 0;
	}

#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int id;
	char name[20];
	public:
		employee(int i,char *nm)
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
		employee emp1(101,"raul sharma");
		employee emp2(102,"saurabh");																																						
		emp1.output();
		emp2.output();
		getch();
		return 0;
	}

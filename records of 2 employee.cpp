#include<conio.h>
#include<iostream>
using namespace std;
class employee
{
	int id,salary;
	char name[20];
	public:
		void input()
		{
			cout<<"enter id and salary\n";
			cin>>id>>salary;
			cin.get();
			cout<<"enter the name\n";
			cin.get(name,20);
		}
		void output()
		{
			cout<<"id ="<<id<<endl;
			cout<<"salary ="<<salary<<endl;
			cout<<"name ="<<name<<endl;
		}
		void compare(employee t1)
		{
			if(salary>t1.salary)
			cout<<name<<"is having hihest salary\n";
			else
			cout<<t1.name<<"is having hihest salary\n";
		}
	};
		int main()
		{
			employee emp1,emp2;
			cout<<"enter record1\n";
			emp1.input();
			cout<<"enter record2\n";
			emp2.input();
			emp1.compare(emp2);
            emp1.output();
			emp2.output();
			getch();
            return 0;
        }

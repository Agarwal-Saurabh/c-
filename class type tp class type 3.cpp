#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class branch1
{
public:
		int id;
		char name[20];
			
void input()
{
cout<<"enter id\n";
cin>>id;
cin.get();
cout<<"enter name\n";
cin.getline(name,20);
}
//friend class branch2; //used when data members are private
};
class branch2
{
	int id;
	char name[20];
	public:
		branch2()
		{
		}
		branch2(branch1 &t)
		{
			id=t.id;
			strcpy(name,t.name);
		}
		void output()
		{
			cout<<id<<" "<<name<<endl;
		}
	};
		int main()
		{
			branch1 ob1;
			branch2 ob2;
			ob1.input();
		    ob2=ob1;
		    ob2.output();
			getch();
			return 0;
		}

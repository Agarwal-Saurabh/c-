#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class student
{
	protected:
		char name[20],cname[20];
		int roll_no;
	void input()
	{
	cout<<"Enter your rollno, and name\n";
	cin>>roll_no;
		cin.get();
		cin.getline(name,20);
    }
void show()
{
	cout<<"your name is:"<<name<<endl;
	cout<<"your roll no is:"<<name<<endl;
}
};
class result:protected student
{
	protected:
		int p,c,m;
		float avg;
		void getdata()
		{
		input();
		cout<<"Enter yr marks\n";
		cin>>p>>c>>m;
		avg=(p+c+m)/3.0;
		}
		void getresult()
		{
		cout<<"Yr average score is:"<<avg<<endl;	
		}
};
class admission:protected result
{
	protected:
		char name[10];
		public:
			void getdetails()
			{
				getdata();
			}
			void check()
			{
				getresult();
				if(avg>100)
				cout<<"invalid score";
				else if(avg>=90)
				strcpy(cname,"st.stephen clg");
				else if(avg>=80)
				strcpy(cname,"hindu clg");
				else if(avg>=70)
				strcpy(cname,"honey clg");
				else if(avg>=60)
				strcpy(cname,"kfc clg");
				else
				{
					strcpy(cname,"college not aloted");
					cout<<"u r no eligible\n";
					exit(0);
				}
				cout<<"name of clg alloted\n"<<endl;
				cout<<cname;
			}
};
int main()
{
	admission ob1;
	ob1.getdetails();
	ob1.check();
	getch();
	return 0;
}

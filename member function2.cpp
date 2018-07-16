#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
	int salary;
	char ename[20],dep[20];
	public:
		void getdata()
		{
			cout<<"enter the salary\n";
			cin>>salary;
			cin.get();
			cout<<"enter the name\n";
			cin.getline(ename,20);
			cout<<"enter the dept\n";
			cin.getline(dep,20);
		}
		void setdata(int sal,char *name,char *dept)
		{
			salary=sal;
			strcpy(name,ename);
			strcpy(dept,dep);
		}
		void show()
		{
			cout<<ename<<"\t"<<dep<<"\t"<<salary<<endl;
		}};
		int main()
		{
			employee e1,e2,e3;
			int s;
			char nm[20],dp[20];
			e1.getdata();
			e1.show();
			e2.setdata(30000,"arun","sales");
			e2.show();
			cout<<"enter the salary\n";
			cin>>s;
			cin.get();
			cout<<"enter name\n";
			cin.getline(nm,20);
			cout<<"enter the dept.\n";
			cin.getline(dp,20);
			e3.setdata(s,nm,dp);
			e3.show();
			getch();
			//return 0;
		}

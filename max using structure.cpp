#include<iostream>
#include<conio.h>
using namespace std;
struct employee
{
	int id;
	char name[20];
	int salary;
};
int main()
{
	employee emp[5];
	int i,max,pos;
	cout<<"enter the records\n";
	for(i=0;i<5;i++)
	{
		cout<<"enter the recrd"<<i+1<<endl;
		cout<<"enter the id and salary\n";
		cin>>&emp[i]->id>>&emp[i]->salary>>endl;
		cin.get();
		cout<<"enter name\n";
		cin.getline(&emp[i]->name,20);
}
cout<<"the record of employee\n";
for(i=0;i<5;i++)
{
	cout<<&emp[i]->id<<"\t"<<&emp[i]->name<<"\t";
    cout<<&emp[i]->salary<<endl;
}
max=emp[0].salary,pos=0;
for(i=1;i<5;i++)
{
	if(max<emp[i].salary)
	{
		max=emp[i].salary,pos=i;
	}
}
cout<<"highest salary="<<max<<endl;
cout<<"employee name ="<<emp[pos].name<<endl;
getch();
return 0;
}

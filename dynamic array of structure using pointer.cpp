#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct student
{
	int roll,marks;
	char name[20];
};
int main()
{
	student *p;
	int size;
	cout<<"enter the size of array\n";
	cin>>size;
	p=new student[size];
	if (p==NULL)
	{
		cout<<"insufficient memory\n";
		getch();
		
		exit(1);
	}
	int i;
	cout<<"enter the records\n";
	for(i=0;i<size;i++)
	{
	cout<<"enter the record of student"<<i+1<<endl;
	cout<<"enter roll no. amd marks\n";
	cin>>p[i].roll>>p[i].marks;
	cin.get();
	cout<<"enter name\n";
	cin.getline(p[i].name,20);
}
cout<<"records r\n";
for(i=0;i<size;i++)
{
cout<<p[i].roll<<"\t"<<p[i].name<<"\t";
cout<<p[i].marks<<endl;
}
getch();
delete[]p;
return 0;
}

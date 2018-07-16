#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	int roll;
	char name[20];
	int marks;
};
int main()
{
	student s1,s2;
	cout<<"entr details of st1\n";
	cout<<"etr roll no,marks";
	cin>>s1.roll>>s1.marks;
	cin.get();
	cout<<"entr name\n";
	cin.getline(s1.name,20);
	cout<<"entr details of s2";
		cout<<"etr roll no,marks";
	cin>>s2.roll>>s2.marks;
	cin.get();
	cout<<"entr name\n";
	cin.getline(s2.name,20);
	cout<<"details are as follows\n";
	cout<<s1.roll<<"\t"<<s1.name<<"\t"<<s1.marks;
	cout<<endl;
	cout<<s2.roll<<"\t"<<s2.name<<"\t"<<s2.marks;
	cin.get(); //work as getch()
	return 0;
}

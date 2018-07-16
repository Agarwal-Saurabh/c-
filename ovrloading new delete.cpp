#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class A
{
	string name;
	int age;
	public:
	A()
	{
	}
	A( string name,int age )
	{
	this->name=name;
		this->age=age;
	}
	void who()
	{
		cout<<name<<" "<<age<<endl;
	}
	void *operator new(size_t size)
	{
	 void *pointer;
	 cout<<"overloaded new\n";
	 pointer=malloc(size);
	 if(pointer==NULL)
	 {
	 	cout<<"Exit\n";
	 	
	 }
	 }
	 void operator delete(void *pointer)
	 {
	 	cout<<"Overloaded delete\n";
	 	free(pointer);
	 }

};
int main()
{

A *ob1;
ob1=new A("anil",24);
delete ob1;
return 0;
}

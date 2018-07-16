#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class A
{
	char name[20];
	public:
		int p;
		protected:
			int q;
			char * setdata()
			{
				strcpy(name,"saurabh");
				p=9000;
				q=12;
				return name;
			}
};
class B:protected A
{
	char name1[20];
	public:
		void access()
		{
			char *n;
			n=setdata();
			strcpy(name1,n);
			cout<<name1<<endl;
			cout<<p<<endl;
			cout<<q<<endl;
		}
};
int main()
{
	B obj;
	obj.access();
	getch();
	return 0;
}


#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	char name[50];
	cout<<"enter ur name\n";
	cin.getline(name,50);
	cout<<"ur name is "<<name;
	getch();
	return 0;
}

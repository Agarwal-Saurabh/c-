#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char s1[20],s2[20];
	cout<<"enter string1"<<endl;
	cin.getline(s1,20);
	cout<<"enter2\n";
	cin.getline(s2,20);
	int r;
	r=strcmp(s1,s2);

	if(r==0)
	cout<<"equal string";
	else
	cout<<"unequal";
	getch();
	return 0;
}
	
	
	

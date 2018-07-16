#include<iostream>
#include<conio.h>
using namespace std;
namespace n1

{
	int g=10;
};
namespace n2
{
	float g=9.8;
};
int main()
{
	cout<<n1::g<<endl;	
	cout<<n2::g<<endl;	
	getch();
	return 0;
}

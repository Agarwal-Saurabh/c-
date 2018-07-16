#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a=10;
int *const p=&a;
(*p)++;
cout<<a<<endl;
getch();
return 0;
}

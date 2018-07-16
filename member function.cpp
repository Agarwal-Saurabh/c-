#include<conio.h>
#include<iostream>
using namespace std;
class numbers
{
	int A,B,C;
	public:
		
		void input()
		{
			cout<<"enter 3 values\n";
			cin>>A>>B>>C;
		}
		void output()
		{
			cout<<A<<"\t"<<B<<"\t"<<C<<endl;
		}
		void largest()
		{
			int max;
			if(A>B && A>C)
			max=A;
			else if(B>C)
			max=B;
			else
			max=C;
			cout<<"largest="<<max<<endl;
		}
	};
	int main()
	{
		numbers n1;
		n1.input();
		n1.output();
		n1.largest();
		getch();
		return 0;
	}

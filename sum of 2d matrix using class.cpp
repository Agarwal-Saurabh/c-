#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class matrix
{
	int a[3][3],i,j;
	public:
		
		void read()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
		}
    }
    void sum(matrix A1,matrix A2)
    {
    	for(i=0;i<3;i++)
    	{
    		for(j=0;j<3;j++)
    		{
    			a[i][j]=A1.a[i][j]+A2.a[i][j];
			}
		}
	}
	void print()
	{
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<a[i][j];
			}
		}
	}
};
	int main()
	{
		matrix a1,a2,a3;
		a1.read();
		a2.read();
		a3.sum(a1,a2);
	    a3.print();
		getch();
	    return 0;
	}

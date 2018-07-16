#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int **p,rows,cols,i,j;
	cout<<"entr size of 2d array\n";
	cin>>rows>>cols;
	p=new int*[rows];
	if(p==NULL)
	{
		cout<<"insufficient";
		getch();
		exit(1);
	}
	for(i=0;i<rows;i++)
	{
		p[i]=new int[cols];
		if(p[i]==NULL)
		{
			cout<<"insufficient";
			getch();
			exit(2);
		}}
		cout<<"enttr matrix\n";
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				cin>>p[i][j];
				cout<<endl;
				
			}}
			cout<<"matrix \n";
				for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				cout<<p[i][j]<<" ";
				cout<<endl;
			}}
			for(i-0;i<rows;i++)
			{
				
				delete []p[i];
			}
			delete[]p;
			getch();
			return 0;
		}

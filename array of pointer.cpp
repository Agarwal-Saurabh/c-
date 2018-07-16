#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int **p,r,c,i,j;
	cin>>r>>c;
	p=new int*[r];
	if(p== NULL)
	{exit(1);
}
for(i=0;i<r;i++)
{
	p[i]=new int[c];
	if(p[i]==NULL)
	{
		exit(2);
	}
	}
	getch();
	return(0);
}
	

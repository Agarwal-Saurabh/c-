#include<conio.h>
#include<iostream>
using namespace std;
class student
{
public:	int phy,chem,math,c,eng; float avg;
	char name[20];
	public:
		void input()
		{
			cout<<"enter marks phy>>chem>>math>>c>>eng \n";
			cin>>phy>>chem>>math>>c>>eng;
			cin.get();
			cout<<"enter the name\n";
			cin.get(name,20);
		}
		void output()
		{
			cout<<"phy ="<<phy<<endl;
			cout<<"chem ="<<chem<<endl;
			
		cout<<"math ="<<math<<endl;
		cout<<"c ="<<c<<endl;
		cout<<"eng ="<<eng<<endl;
		cout<<"name ="<<name<<endl;
		}
		void average()
		{
			 avg=(phy+chem+math+c+eng)/5.0;
	//	cout<<"avg marks ="<<avg<<endl;
	}

		
		
		void compare(student t1)
		{
			if(avg>t1.avg)
			cout<<name<<"is having hihest\n";
			else
			cout<<t1.name<<"is having hihest\n";
			cout<<avg<<endl;
			cout<<t1.avg<<endl;
		}
};
		int main()
		{
			student st1,st2;
			cout<<"enter record1\n";
			st1.input();
			cout<<"enter record2\n";
			st2.input();
			st1.compare(st2);
            st1.output();
			st2.output();
		
			getch();
            return 0;
        }

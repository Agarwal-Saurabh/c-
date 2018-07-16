 #include<iostream>
 #include<conio.h>
 #include<stdlib.h>
 using namespace std;
 class array
 {
 	char *name;
 	int size;
 	public:
 		array(int s)
 		{
 			size=s+1;
 			name=new char[size];
 			if (name==NULL)
 			{
 				cout<<"insufficient\n";
 				getch();
 				exit(1);
 			}
 		};
 		~array()
 		{
 			cout<<"deconstructor calling\n";
 			delete[]name;
 		}
 		void input()
 		{
 			cout<<"enter ur name\n";
 			cin.getline(name,size);
 		}
 		void show()
 		{
 			cout<<"ur name is "<<name<<endl;
 		}
 	};
 	int main()
 	{
 		array ob1(10);
 		ob1.input();
 		ob1.show();
 	
 	getch();
 	return 0;
 }

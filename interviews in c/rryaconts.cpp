#include<iostream>
#include<cstring>
#include<string>
using namespace std;
 class Array
 {
 	string name;
 	int mark;
 	
 	public :
 		void getn()
 		{
getline(cin,name) ;			
		 }
		 void getm()
		 {
		 	cin>>mark;
		 }
		 
		 void print()
		 {
		 	cout<<"name is"<<name<<endl;
		 	cout<<"mark is"<<mark<<endl;
		 }
		 
 };
 
 int main()
 {
 	Array a[3];
 	int i=0;

 for( i=0; i<3; i++ )
	{
		cout << "Student " << i + 1 << endl;
		cout << "Enter name" << endl;
		a[i].getn();
		cout << "Enter marks" << endl;
		a[i].getm();
	}
	 cout<<"DISPLAY STUDENT DATA "<<endl;
	 
	 for( i=0;i<3;i++)
	 {
	 	cout<<"student details"<<i+1<<endl;
	 	a[i].print();
	 }
	 
	 return 0;
	 
 }

#include<iostream>
#include<cstring>
using namespace std;
int main()
{

struct student 
{
	int roll;
	string name;
	float mark;
};

		struct student p1, *p;
		
		
/*  p1={1,"himanshu",99.2};
	p2.roll=2;
	p2.name="dwivedi";
	p2.mark=90.2;
	
	cout<<"data of first student"<<endl;
	cout<<p1.roll<<endl;
	cout<<p1.name<<endl;
	cout<<p1.mark<<endl;
	
	cout<<"data of second student"<<endl;
	cout<<p2.roll<<endl;
	cout<<p2.name<<endl;
	cout<<p2.mark<<endl;
	*/
	

	p=&p1;
	cout<<p->roll;
	return 0;
	
	
}

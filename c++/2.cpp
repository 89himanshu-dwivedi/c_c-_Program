#include<iostream>
#include<cstring>
using namespace std;
struct ram
{
	int id;
	string name;
	
}s[5];
int main()
{
	int i;
	for( i=0;i<5;i++)
	{cout<<"id of \t"<<i<<"\tstdudent"<<endl;
		cin>>s[i].id;
	cout<<"name  of\t"<<i<<"\tstudent"<<endl;
	cin>>s[i].name;
	
	}
	cout<<"\n"<<"priiiiiiiiiiiiiiiiiiiiiiiiiiiit"<<endl;
	for( i=0;i<5;i++)
	{
		cout<<"print \t"<<i<<"\tstudent data"<<endl;
		cout<<s[i].id<<endl;
		cout<<s[i].name<<endl;
	}
}

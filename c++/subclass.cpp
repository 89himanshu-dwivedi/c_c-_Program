#include<iostream>
using namespace std;

class Class
{
protected:	string name;
	public :
	void setn(string na)

    {
	name=na;
	}	
	
	string getn()
	{
		return name;
	}
	
	void print()
	{
		cout<<"i am class"<<name<<endl;
	}
};

class Subclass : public Class
{
	public :
	void print()
	{
		cout<<"i am sub class"<<name<<endl;
	}
};

int main()
{
	Class c;
	Subclass s;
c.setn("ram");
	c.print();
	s.print();
	return 0;
}
	
	


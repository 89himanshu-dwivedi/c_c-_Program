#include<iostream>
#include<cstring>
using namespace std;
class B;
class A
{
	int v;
	public :
		A()
		{
			v=5;
		}
		 friend int sum(A,B);
		 
		
};

class B
{
	int v;
public :
	B()
	{
		v=6;
	}
	friend int sum(A,B);
};

int sum(A a,B b)
{
	return(a.v+b.v);
}

int main(){
	A a;
	B b;
	cout<<"sumn of number is"<<sum(a,b);
	return 0;
}

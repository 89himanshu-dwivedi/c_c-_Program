#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	*p=6;
	cout<<*p<<endl;
	delete p;
	cout<<*p<<endl;
}

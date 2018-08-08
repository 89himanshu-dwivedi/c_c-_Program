#include<iostream>
using namespace std;

inline int sum(int a,int b)
{
	int s=a+b;
	return s;
}
int main()
{
	int a=0,b=9;
//	cin>>a;
//	cin>>b;
	int c=sum(a,b);
	cout<<c;
	return 0;
	
}

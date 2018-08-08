#include<iostream>
using namespace std;
int avg(int ,int);
int main()
{
	int n,m;
	
	cout<<"enter two number" <<endl;
	cin>>n>>m;
	int ba=avg(n,m);
	cout<<ba;
	return 0;
	
}

int avg(int a,int b)
{
	int aa;
	aa=(a+b)/2;
	return aa;
	
}

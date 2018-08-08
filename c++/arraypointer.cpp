#include<iostream>
using namespace std;
int main()
{
	int a[20]={1,2,3,4,5,6,7,8,9,10};
	int *p,i;
	p=a;
	for(i=0;i<10;i++)
	cout<<"*p("<<i<<")\t=\t"<<a[i]<<endl;
	
	return 0;
}

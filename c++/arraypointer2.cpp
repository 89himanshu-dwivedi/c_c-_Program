#include<iostream>
using namespace std;

int lo(int *a,int n)
{
int i,sum=0;
	for(i=0;i<n;i++)
	{
	//	cout<<"enter value  of a["<<i<<"]\t=";
		//cin>>a[i];
	sum=sum+a[i]	;
	}
	float avg=sum/n;
	return avg;
}
int main()
{
int n=5;
int a[10]={2,4,6,8,10}	;
int b=lo(a,n);
cout<<b;
return  b;

	
	
	
}

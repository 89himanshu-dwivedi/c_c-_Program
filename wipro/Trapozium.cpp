#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int c1=0,c2=0;
int n=4;
int i,j,k,l;
for(i=n;i>=1;--i)
{
	for(j=n;j>i;--j)
	cout<<" ";
	
	for(k=1;k<=i;k++)
	{
	  cout<<++c1<<"*";
	  //cout<"*";
    }
    
    for(l=1;l<=i;l++)
    {
    	cout<<++c2+i*i;
    	if(l != i)
    	cout<<"*";
	}
	cout<<"\n";
}
}

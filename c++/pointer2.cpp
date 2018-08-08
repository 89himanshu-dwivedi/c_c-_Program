#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
int n,m;
cin>>m;
cin>>n;
cout<<"value of m and n before swap\t"<<m<<"\t\t"<<n<<endl;
swap(&m,&n);
cout<<"after wsap value of a and b\t"<<m<<"\t\t"<<n;
return 0;


}

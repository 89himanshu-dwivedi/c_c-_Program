#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	//string s1="hii";
	//string s2="ggg";
	//string s2;
	int l;
	char a[10]="ADRFFG";
	 l=strlen(a);
	for(auto i=0;i<=l;i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
		{
			a[i]=a[i]+32;
		}
		cout<<a[i];
	}

	return 0;
}


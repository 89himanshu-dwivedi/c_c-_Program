#include<iostream>
using namespace std;
int main()
{
	int sum=0,no;
	int *mark=new int[no];
	cout<<"nete no of  subject"<<endl;
	cin>>no;
	
	cout<<"enter the mark"<<endl;
	for(auto i=0;i<no;i++)
	cin>>*(mark+i);
	
	cout<<"sum of mark"<<endl;
	for(auto i=0;i<no;i++)
	sum=sum+*(mark+i);
	
	cout<<"total mark is\t"<<endl;
	cout<<sum<<endl;
	cout<<"avg. mark is \t"<<endl;
	cout<<sum/no<<endl;
	
	
	delete[] mark;
	cout<<sum<<endl;
	return 0;
	
}

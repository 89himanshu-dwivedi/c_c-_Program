#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v={1,2,3,9,8,7};
	//v.push_back(12);
	//v.push_(11);
	//v.pop_back();
	for(auto i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	cout<<"\n";
	
	cout<<v.capacity()<<endl;
	
	
	
}

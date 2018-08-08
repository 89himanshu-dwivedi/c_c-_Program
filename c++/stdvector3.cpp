#include<iostream>
#include<vector>
using namespace  std;

int main()
{
	int arr[]={1,3,5,9,7,9};
	vector<int>v1;
	vector<int>v2;
/*	v1.assign(3,6);
	for(auto i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<endl;
	}
*/

v1.assign(arr,arr+4);
v2.assign(arr,arr+6);

	for(auto i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<endl;
	}

cout<<"v2 is printtttttt"<<endl;
	for(auto i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<endl;
	}

return 0;
	
	
 } 

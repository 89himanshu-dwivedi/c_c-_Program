#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>

using namespace std;
int main()
{
	array<int,10>a={1,2,3,7,8,9,10,4,5,6};
	
int s=a.size();
 a.at(1)=100;
int i;
for(i=0;i<s;i++)
cout<<"a["<<i<<"]\t="<<a.at(i)<<endl;

cout<<a.front()<<endl;
cout<<a.back()<<endl;
cout<<a.empty()<<endl;
cout<<a.max_size()<<endl;

for(auto i=a.begin();i!=a.end();i++)
cout<<*i<<endl;

sort(a.begin(),a.end());

for(auto i=a.begin();i!=a.end();i++)
cout<<*i<<endl;




/*
a.fill(2);
cout<<a[9];9
*/

return 0;	
}

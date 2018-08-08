#include<iostream>
#include<array>
using namespace std;
int print(std::array<int,10>n)
{
	int i;
	for(i=0;i<n.size();i++)
	cout<<"a["<<i<<"]\t="<<n[i]<<endl;


}

int main()
{
	array<int ,10>a={1,23,4,5,6,7,8,9,4,5};
	print(a);
	return 0;
}

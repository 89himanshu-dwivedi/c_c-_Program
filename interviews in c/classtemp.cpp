#include<iostream>
using namespace std;
template<class T>

class Mark
{
	T mark1;
	T mark2;
	public :
     Mark(T m1,T m2)
	{
		mark1=m1;
		mark2=m2;
	}
	
	T sum()
	{
		return (mark1 + mark2);
	}
};

int main()
{
	Mark<int> m1(10,10);
	Mark<float>m2(10.01,14.225);
	cout<<m1.sum()<<endl;
	cout<<m2.sum()<<endl;
}

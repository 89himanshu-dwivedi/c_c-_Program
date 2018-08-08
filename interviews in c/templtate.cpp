#include<iostream>
using namespace std;
//template<typename T>
template<class T>
//template<typename T1,typename T2>



T sum(T x,T y)
{
	return x+y;
}
int main()
{
	cout<<"sum of int no\t"<<sum(1,2)<<endl;
	cout<<"sum of float\t"<<sum(10.20,201.121454521)<<endl;
	cout<<"sum of double no\t"<<sum(120.2415,120.154513);
	return 0;
	
	
	
	
	
}

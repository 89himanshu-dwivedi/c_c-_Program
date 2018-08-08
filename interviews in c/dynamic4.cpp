#include<iostream>
using namespace std;

class A
{
	public :A()
	{
		cout<<"con"<<endl;
	}
	~A(){
		cout<<"dcon"<<endl;
	}
};

int main()
{
	 A *a=new A[4];
	 delete[] a;
	 return 0;
	
}

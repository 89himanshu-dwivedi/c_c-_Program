#include<iostream>
#include<cstring>
using namespace std;

class cini
{
	int l;
	int b;
	public:
		cini(int ll,int bb):l(ll),b(bb)
		{
			
		}
		int geta()
		{
		
		return (l*b);	
		}
};

int main()
{
	cini c(10,10);
	cout<<c.geta();
}


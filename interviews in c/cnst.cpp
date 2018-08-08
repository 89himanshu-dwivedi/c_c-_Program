#include <iostream>

using namespace std;

class A
{
	const int x;
	public:
		A(int y)
		{
			x = y;
		}
};

int main()
{
	A a(5);
	return 0;
}

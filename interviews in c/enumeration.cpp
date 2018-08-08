#include<iostream>
using namespace std;

enum days{sun=5,mon,tus,wed,thu,fri,sat};

int main()
{
 enum days d;
	d=sun;
	cout<<d<<endl;
	
enum days d1(sat);
	cout<<d1<<endl;
	
	cout<<thu<<endl;
	return 0;
}

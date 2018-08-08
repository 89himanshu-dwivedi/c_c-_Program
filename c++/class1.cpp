#include<iostream>
#include<cstring>
using namespace std;

class ract
{
	public:
	int  length,breath;
	void setb(int b);
	void seth(int l);
	int getarea();
	
 } ;
 
 void ract::setb(int b)
 {
 	breath=b;
 }
 
void ract::seth(int l)
{
	length=l;
}

int ract::getarea()
{
	return length * breath;
}
int main()
{
	ract rt;
	rt.setb(10);
	rt.seth(10);
	int a=rt.getarea();
	
	cout<<"area is"<<a;
	return 0;+-
	
}

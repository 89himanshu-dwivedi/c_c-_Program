#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class A
{
	public :
		void print()
		{cout<<"class A"<<endl;
		}
};

class B
{
	public :
		void dispaly()
		{
			cout<<"class B"<<endl;
		}
	
};

class C :public A,public B
{
	public :
		
		void show()
		{
		C::print();
		}
		 void screen()
		 {
		 	C::dispaly();
		 }
};

int main()
{
	C c;
//	cout << c.show()<<endl;
	//cout<<c.screen();<<endl;
	c.show();
	c.screen();
	
	return 0;
	
}

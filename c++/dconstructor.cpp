#include<iostream>
using namespace std;

class dcon
{
	int l;
	int b;
	
	public :
		
		void setl(int len)
		{
			l=len;
		}
		void setb(int bre)
		{
			b=bre;
		}
	int geta()
	{
		return l*b;
	}
		
	/*	
		dcon()
      {

		cout<<"cons"<<endl;
	}
	*/
	~dcon()
	{
		cout<<"des"<<endl;
	}

	dcon()
    {
		cout<<"cons"<<endl;
	}

};


int main()
{
	
	dcon d;
	d.setl(10);
	d.setb(10);
	cout<<d.geta()<<endl;
//	cout<<d.geta()<<endl;
	
	
}

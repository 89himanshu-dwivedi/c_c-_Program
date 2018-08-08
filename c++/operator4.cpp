#include<iostream>
int main()
{
	using namespace std;
	int a=10,b=3,c=10;
	cout<<(a && b)<<endl;
	cout<<(a || b)<<endl;
	cout<<((a>b) && (c>b))<<endl;
	cout<<"   "<<endl;
	cout<<((5<6)&&(6<9))<<endl;
	cout<<((5>6)&&(6<9))<<endl;
	cout<<((5<6)&&(6>9))<<endl;
	
		cout<<"   "<<endl;
		cout<<((5<6)||(6<9))<<endl;
	cout<<((5>6)||(6<9))<<endl;
	cout<<((5<6)||(6>9))<<endl;
}

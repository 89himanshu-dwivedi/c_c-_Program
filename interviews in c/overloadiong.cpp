#include<iostream>
#include<cstring>
using namespace std;

class Over
{
	public :
		void animal()
		{
		
		cout<<"this is animal";
 } };
 
 class Load:public Over
 {
 	public:
 		void animal()
 		{
		
 		cout<<"this is dog animal";
 }};
 
 int main()
 {
 	Load l;
 	l.animal();return 0;
 }

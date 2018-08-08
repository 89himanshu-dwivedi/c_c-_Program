#include<iostream>
using namespace std;
int main()
{
/*	char c[10];
	cin.getline(c,sizeof(c));
	cout<<c;
*/

char name[]= "Sam"; 
  	char *p;
  	p = name;    
  	while( *p != '\0')
  	{
    	cout << *p; 
    	p++; 
  	}
return 0;
}

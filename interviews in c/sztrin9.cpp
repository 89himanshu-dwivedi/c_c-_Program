#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[10];
	cin.getline(s1,sizeof(s1));
	int i=0;
	while( s1[i] != '\0')
	{
		if( s1[i]  == ' ')
		  {
		  	i++;
		  	cout<<"string is"<<(*s1+i);
		  }
		  i++;
	}
	return 0;
	
}

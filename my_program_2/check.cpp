#include<iostream>
int main()
{
	
char s[10]={'r','r','r','a','b'};
//cin>>s;
	int i,c;
for(i=1;s[i] != '\0';i++)
{
	
	if( (s[i] == 'r') && (s[i+1] == 'r') )
	c++;
	}	
	
	std::cout<<c;
	
	return 0;
	
}

#include<iostream>
using namespace std;
int main()
{
	string s="himanshu kumar";
	string s1="himanshu";
	int n=s.size();
//	s.resize(n+4,'g');
//	cout<<s<<endl;
cout<<s[4]<<endl;
cout<<s.at(4)<<endl;	
	
	cout<<s.compare(s1)<<endl;
	cout<<s.find('u')<<endl;
	
	cout<<s.substr(8)<<"\t<<<<===>>> \t"<<s.substr(3,5)<<endl;
	return 0;
	
}

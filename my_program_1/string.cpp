#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{

    string s;
    string s2;
    int t;
    cin>>t;
    while(t >0 )
    {
	cin>>s>>s2;
    sort(s.begin(), s.end());
     sort(s2.begin(), s2.end());
     if(s == s2)
     cout<<"yes"<<endl;
     else
     cout<<"no"<<endl;
 t--;   
}

    return 0;
}

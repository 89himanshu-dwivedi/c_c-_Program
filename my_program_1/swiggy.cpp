#include <iostream>
using namespace std;

int main()
{
    int n,x;
   n=1000;
    //cin>>n;
    //cin>>x;
    int r,sum=0;
   if(--n > 2)
        {
        	int x;
        	cin>>x;
            while(x > 0)
            {
            r=x%10;
            if( r % 2 != 0 ||   r != 1 || r != 0)
            sum=sum*10+r;
            x=x/10;
            }
           // n=n-;
        }
        cout<<sum;
    
    
    return 0;
}


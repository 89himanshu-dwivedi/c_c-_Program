#include<stdio.h>
#define test 5

bool p(int n)
    {
      int sum=0;
      int m=n;
      
        while(n> 0)
        {
           
            sum=sum*10+(n%10);
            n=n/10;
        
        }
        
        if(sum == m)
        return true;
        
      return true;
    }
int main()
{
	int n;
	cin>>n;
	//int n=5005;
	p(n);
}

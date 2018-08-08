#include<iostream>
using namespace std;
int main()
{
    int Q,N;
    
    cin>>Q;
    cin>>N;

int A[N];

for(auto i=0;i<N;i++)
cin>>A[i];

    
for(auto j=0;j<Q;j++)
{
    int sum=0;
    int L,R,X,Y;
    int i=j+1;
    
    if(i == 1)
    {
        
    }
    else if( i ==2)
    {
        cin>>L;
        cin>>R;
        for(auto i=L;i>=R;i++)
        sum=sum+A[i];
        cout<<sum<<endl;
    }
     else if( i == 3)
    {
        cin>>L;
        cin>>R;
        for(auto i=L;i>=R;i++)
        sum=sum+A[i];
        cout<<sum<<endl;
    }
    
    else if( i == 4)
    {
        cin>>Y;
        cin>>X;
        A[Y]=X;
    }
    
    else
    {
        cin>>L;
        cin>>R;
        for(auto i=L;i<=R;i++)
        sum=sum+A[i];
        cout<<sum<<endl;
    }
}
    
    

  return 0;
}

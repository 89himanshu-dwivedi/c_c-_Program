#include <stdio.h>

void  m1(int N)
{
    int j=0,A[N];
    
     //   scanf("%d",&N);
     for(j=0;j<N;j++)
     {
        scanf("%d",&A[j]);
     }
     
if(A[j] <= A[j+1] || A[j+1] > A[j+2] || A[j] == A[j+2])
{
    printf("Alan\n");
}    
else
{
    printf("Charlie\n");
}
}
int main()
{
    int T,N,A[N];
    scanf("%d",&T);
    int i=0,j=0,k=0;
    
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
     m1(N);
    }
    
}


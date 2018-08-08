#include<stdio.h>
int main()
{
	int n,r,sum=0,i;
	printf("enter the no");
	scanf("%d",&n);
	
	while(n != 0)
	{
		int f=1;
		r=n%10;
		for(i=1;i<=r;i++)
		{
			f=f*i;
		}
		sum=sum+f;
		n=n/10;
	}
	printf("%d",sum);
}

#include<stdio.h>
int main()
{
	int i,n,r;
	printf("enter the no");
	scanf("%d",&n);
	int t=n;
	int sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(t == sum)
	printf("yes");
	else
	printf("no");
	
	return 0;
}

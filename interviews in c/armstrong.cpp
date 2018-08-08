#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	int t=n;
	while(n != 0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(t == sum)
	printf("yes no is armstrong");
	else
	printf("number is not armstrong");

 return 0;
}

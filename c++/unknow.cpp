#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("enter the number");
	scanf("%d\n",&n);
	while(n > 10)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		}
		printf("%d\n",sum);
}

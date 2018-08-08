#include<stdio.h>
int main()
{
	int n,min,max,tem,sum;
	int r;
	min=1;
	max=1000;
	for(n=min;n<max;n++)
	{
		tem=n;
		sum=0;
		
		while(tem!=0)
		{
			r=tem%10;
			tem=tem/10;
			sum=sum+(r*r*r);
		}
		if(n == sum )
		printf("yes=%d\n",sum);
		
	}
	return 0;
}

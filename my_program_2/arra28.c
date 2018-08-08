#include<stdio.h>
int  arrayget(int *a,int size)
{
	int i,sum=0,avg;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	
	avg=sum/size;
return avg;	
	
}

void main()
{
	int a[6]={2,4,6};
	int n=sizeof(a)/sizeof(a[0]);
	 double d=arrayget(a,n);
	 printf("%f",d);
}

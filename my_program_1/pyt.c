#include<stdio.h>
const int max=4;


void main()
{
	int a[]={1,2,3,4};
	int *ptr[max];
	int i;
	
	
for(i=0;i<max;i++)
{
		
	ptr[i]=&a[i];
}
for(i=0;i<max;i++)
{

	printf("ptr=%d\n",ptr[i]);
	
	printf("*ptr=%d\n",*ptr[i]);
}
	
}

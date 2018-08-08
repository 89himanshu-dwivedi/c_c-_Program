#include<stdio.h>
int a=50;

void main()

{
	int b=10;
	int a=30;
	int c;
	printf("value of a is =%d\n",a);
	printf("value of b is =%d\n",b);
	
	c=sum(a,b);
	
	printf("value of a is =%d\n",c);
	
	
	
}
int sum(int a,int b)
{
	printf("value of a is=%d\n ",a);
	printf("value of b is=%d\n",b);
	return (a+b);
}

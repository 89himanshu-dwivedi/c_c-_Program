#include<stdio.h>
int main()
{
	int a=30,*c,*d;
	c=&a;
	d=c;
	printf("%d\n",*c);
	a=a+10;
	printf("%d\n",*c);
	//printf("a=%dp=%d*p=%d",&a,&p,&*p);
	return 0;
}

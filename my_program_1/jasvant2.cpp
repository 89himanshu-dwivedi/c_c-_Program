#include<stdio.h>
int f(int );
int g(int);
int main()
{
int x,y,s=2;
s*=3;
y=f(s);
x=g(s);
	printf("x=%d\ty=%d\n",x,y);
	
	 return 0;
}
int t=8;

int f(int a)
{
//	int i=100;
a-=5;
t-=4;
	//printf("%d\n",i);
	//i++;
return (a+t);
}

int g(int a)
{
	a=1;
	t+=a;
	return (a+t);
	
	
}

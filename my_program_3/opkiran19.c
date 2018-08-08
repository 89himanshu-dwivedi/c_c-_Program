#include<stdio.h>
void main()
{
	int a,b,c;
    a=3 > 2 && 5 <= 8;
	b=3 > ( 2 && 5) <= 8;
	c=3 < (2 && 5  >= 8);	
	
	printf("a=%d\tb=%d\tc=%d\n",a,b,c);
	
 a= 5>2!=0||2!=2;
 b= 5>(2!=0)||2==2!=1;
 c=(5==5)!=0||2!=5;

	printf("a=%d\tb=%d\tc=%d\n",a,b,c);
	
}

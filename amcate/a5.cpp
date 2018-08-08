#include<stdio.h>
int main()
{
	/*int a=50,b=25,c=0;
	int d=(a>50 || b >25 && c>10);
   //int e=((a>50 || b >25) && c>10);
	*/
	int a=30,b;
	int *d,*c;
	c=&a;
//	b=*c;
	a=a+10;
	printf("%d",*c);
}

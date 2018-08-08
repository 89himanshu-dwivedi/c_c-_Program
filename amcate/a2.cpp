#include<stdio.h>
int main()
{
	int x = 40, y = 35, z = 20, w = 10;
	int m=x*y/z-w;
	int n=x*y/(z-w);
	printf("%d%d",m,n);
	return 0;
}

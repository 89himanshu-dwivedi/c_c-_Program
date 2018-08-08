#include<stdio.h>
struct g
{
	int n;
	char me[50];
	char mee[50];
	
}m1 = { 2,"if you are driven bysuccess","make sure trhat it is quality drive"};

int main()
{
	struct g m2,m3;
	m2=m1;
	m3=m2;
	printf("%d\n%d\n%d\n" ,m1.n,m2.me,m3.mee);
	return 0;
}

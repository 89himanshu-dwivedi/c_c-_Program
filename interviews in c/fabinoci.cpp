#include<stdio.h>
int main()
{
	long int f0=0,f1=1,f;
	int i,n;
	printf("enter the value of n");
	scanf("%d\n",&n);
	
	for(i=2;i<n;i++)
	{
	f=f0+f1;
	f0=f1;
	f1=f;
		printf("%ld\t",f);
	}
	
	return 0;
	
	
	
}

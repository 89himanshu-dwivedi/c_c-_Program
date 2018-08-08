#include<stdio.h>
void main()
{
	int n[100];
	int i,j;
	
	for( i=0;i<10;i++)
	n[i]=90+i;
	
	for(j=0;j<10;j++)
	printf("value  of array is = %d\n",n[j]);
}

#include<stdio.h>
const int m=3;
void main()
{
	int i,*ptr;
	int v[]={1,20,300};
	
	ptr=&v[m-1];
	
	for(i=m;i>0;i--)
	{
		printf("print the valure of v[%d]=%d\n",i,ptr);
		
		printf("print the valure of v[%d]=%d\n",i,*ptr);
		
		ptr--;
		
	}
	
}

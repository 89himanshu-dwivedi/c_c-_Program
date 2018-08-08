#include<stdio.h>
const int m=3;
void main()
{
	int i,*ptr;
	int v[]={1,20,300};
	ptr=v;
	i=0;
	
	while(ptr <= v)
	{
		printf("print the valure of v[%d]=%d\n",i,v);
		
		printf("print the valure of v[%d]=%d\n",i,*ptr);
		
		ptr++;
		i++;
	}
	
}

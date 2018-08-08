#include<stdio.h>
void main()
{
	int a=60;
	int b=13;
	
	printf("%d",(a & b))	;



	printf("\n");
	
	
	printf("%d",(a | b));
	
	printf("\n");
	
	printf("%d",(a ^ b));
	
	printf("\n");
	
	printf("%d",(~ a));
	
	
	printf("\n");
	
	printf("%d",(a << 2));
	
	printf("\n");
	
	printf("%d",(a >> 2));
	
	printf("\n");
	
	printf("%d",(b << 2));
	
	printf("\n");
	
	printf("%d",(b >> 2));
	
}

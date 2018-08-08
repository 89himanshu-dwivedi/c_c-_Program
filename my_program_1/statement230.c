#include<stdio.h>
void main()
{
	int per;
	printf("enter the persantage");
	printf("\n");
	scanf("%d",&per);
	
	if(per > 50 && per  < 60 )
	printf("fail");
	printf("\n");
	
	if(per > 60 && per  <70 )
	printf("just pass");
	printf("\n");
	
	if(per > 70 && per  < 80 )
	printf("second");
	printf("\n");
	
	if(per > 80 && per  < 90 )
	printf("first");
	printf("\n");
	
}

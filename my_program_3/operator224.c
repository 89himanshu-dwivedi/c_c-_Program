#include<stdio.h>
void main()
{
	int a=10;
	float f;
	char c;
	double d;
	int b=10;
	int e=20;
	int x[40]={1,2,3,4,5,6};
	int y,z;
	int* ptr;
	
	
	printf("sixe of a is %d",sizeof(a));
	printf("\n");	
	
	
	printf("sixe of f is %d",sizeof(f));
	printf("\n");
	
	
	
	printf("sixe of d is %d",sizeof(d));
	printf("\n");
	
	
	printf("sixe of c is %d",sizeof(c));
	printf("\n");
	
	
	
	printf("sixe of a is %d",sizeof(x));
	printf("\n");
	
	y=(a==b) ? 100 : 200;
	printf("value of  a is %d ",y);
	printf("\n");
	
	z=(a == e) ? 100 : 200;
	
	printf("value of  a is %d ",z);
	printf("\n");
	
	printf("value of *ptr is  %d",ptr);
	
	
	
}

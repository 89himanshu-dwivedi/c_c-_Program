#include<stdio.h>
int main()
{
float a=25.345;
float *b;
b=&a;
	 //val();
	//int a = 42;

printf("%f\n", (void *) &a);
	 printf("a=%f\t&b=%d\t*b=%d\n",a,b,*b);
	 //val();
	 //printf("%d\n",i);
	 return 0;
}


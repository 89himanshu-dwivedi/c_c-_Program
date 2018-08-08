#include<stdio.h>
int main()
{
	float f=2.0;
	int i=1;
	while(f < 3.0)
	{   
	printf("%d",i);
	printf("==");
		printf("%f",f);
		printf("==");
		printf("h\n");
		f=f+0.1;
		i++;
	}~
	return 0;
}

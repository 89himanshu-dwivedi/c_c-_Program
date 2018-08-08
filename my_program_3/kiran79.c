#include<stdio.h>
void main()
{
	float f1=0.0001;
	
	float f2=0.0003;
	
	double lf1=f1,lf2=f2;
	
	f2=f1+f2;
	
	f2=f2/100;
	
	printf("%f\t%f\n",lf1,lf2);
	
	lf1=lf1/100;
	
	lf2=lf2/100;
	
	printf("f1=%f\tf2=%f\tlf1=%f\tlf2=%f",f1,f2,lf1,lf2);

}


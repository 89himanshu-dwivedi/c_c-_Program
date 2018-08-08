#include<stdio.h>
void main()
{
	int x,y,z;
	x=2>5<=0;
	y=2>3<=1;
	z=3>2>1>0;
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);

x=-1<=1>=2<=1;
y=2>=2<=3>=4<=0;
z=5>=8<=3>=0;

	printf("x=%d\ty=%d\tz=%d\n",x,y,z);

x=6<8>=1<=0>-1;
y=8>=6<=2>=5<=-1;        

	printf("x=%d\ty=%d\n",x,y);


}

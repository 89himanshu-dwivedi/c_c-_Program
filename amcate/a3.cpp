#include<stdio.h>
int main()
{
	
/*	float x = 34.54;  
	int  y = 20, z = -5;
	int m=y > 50 && z > 10 or x > 30 ;
	
printf("%d",m);
*/


int x = 0 ;// statement 1
int sum = 0 ;// statement 2
while ( x < 10 ) // statement 3
{
sum = x*x*x ;// statement 4
x = x + 1; // statement 5
}
printf("%d",sum); // statement 6
return 0;
}

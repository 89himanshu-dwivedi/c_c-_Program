#include<stdio.h>
int main()
{
	

int x = 0 ;// statement 1 
int sum = 0;  // statement 2
 while ( x < 10 ) // statement 3 
 { 
 sum += x*x*x ;// statement 4 
 x = x + 1; // statement 5 
 } 
 printf("%d",sum);
 return 0;
}

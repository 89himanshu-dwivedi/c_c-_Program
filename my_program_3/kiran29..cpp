#include<stdio.h>
int main()
{
int i=4,j=7;
j=j || i++ && printf("you can");
printf("i=%dj=%d",i,j);
return 0;
	
}


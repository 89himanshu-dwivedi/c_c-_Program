#include<stdio.h>
 int cc(int y,int z)
 { 
 y = y + 1; 
 z = z + 1; 
 return y - z;
}
int main()
{
	int a = 12, b = 20, c;
	 c = cc(a,b);
	printf("%d%d",a,c);
	
	return 0;
}




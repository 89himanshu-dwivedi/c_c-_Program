#include<stdio.h>
//int i=0;
int g(int);
int main()
{
	//printf("%d\n",i);
	int  i,j;
	 //val();
	 for(i=1;i<5;i++)
	 {
	 	j=g(i);
	 	
	 printf("%d\n",j);
}
//	 val();
//	 printf("%d\n",i);
	 return 0;
}

int g(int x)
{
	static int v=1;
	int b=3;
	v+=x;
	//printf("%d\n",i);
	//i++;
	return (v+x+b);
}

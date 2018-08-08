#include<stdio.h>
int i=0;
void val();
int main()
{
	static int c=5;
	printf("%d\n",c--);
	 if(c != 0)
	 main();
	 //printf("%d\n",i);
	 //val();
	 //printf("%d\n",i);
	 return 0;
}

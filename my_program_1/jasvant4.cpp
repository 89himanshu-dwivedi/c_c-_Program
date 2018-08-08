#include<stdio.h>
//int i=0;
void val();
int main()
{
	 val();
	 val();
	 return 0;
//	 printf("%d\n",i);
//	 return i;
}

void val()
{
 	auto int i=0;
 	register int j=0;
 	static int k=0;
 	i++,j++,k++;
 	
	printf("i=%d\tj=%d\tk=%d\n",i,j,k);
	//i++;
	
}

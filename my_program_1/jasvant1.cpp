#include<stdio.h>
int i=0;
void val();
int main()
{
	printf("%d\n",i);
	 i++;
	 val();
	 printf("%d\n",i);
	 val();
	 printf("%d\n",i);
	 return 0;
}

void val()
{
	int i=100;
	printf("%d\n",i);
	i++;
	
}

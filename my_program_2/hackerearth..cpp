#include<stdio.h>
int main()
{
	int a=4;
	int b=8;
    int c=5;
  printf("%d\n",(a*b)%c);
  printf("%d\n",((a%c)*(b%c))%c);
  
  
  printf("%d\n",(b-a)%c);
  printf("%d\n",((b%c)-(a%c)+c)%c);
  
  return 0;	
	
}

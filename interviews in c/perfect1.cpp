#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("entere the number ");
	scanf("%d",&n);
	while(i <n)
	{
		if(n % i == 0)
		
			sum=sum+i;
			i++;
		
}
 if(sum == n)
	printf("yes perfect squarr");
	else
	printf("not perfect");
	
	return 0;
}

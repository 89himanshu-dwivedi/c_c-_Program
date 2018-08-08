#include<stdio.h>
int main()
{
	printf("%s","c""hi""j\n");
	printf("%s",__DATE__);
	char *p="c-pointer";
	printf("%*.*s",10,7,p);
return 0;
}

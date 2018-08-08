#include<stdio.h>
void main()
{
	int x=12,y=5;

	if((x%y)== (x-(x/y)))
{ 
printf("yes1");
}
else
{
	printf("1no");
}

printf("\n");
	if((x%y) == (x-(x/y)*y))
{ 
printf("yes2");
}
else
{
	printf("2no");
}


printf("\n");

	if((x%y)== (y-(x/y)))
{ 
printf("yes3");
}
else
{
	printf("3no");
}



printf("\n");

	if((x%y)== (y-(x/y)*y))
{ 
printf("yes4");
}
else
{
	printf("4no");
}



printf("\n");

}

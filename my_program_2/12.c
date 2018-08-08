#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char ch[90];
f1=fopen("1.c","r");
if(f1 == NULL)
{

	puts("con not open source file");
	exit(1);

}

f2=fopen("2.c","r");
if(f2 == NULL)
{
	
	puts("cont not open source file 2");
	exit(2);

}
	

while(1)
{
	ch = fgetc(f1);
	if(ch == EOF)
	break;
	else
	fputc(ch,f2);

}	
	
fclose(f1);
fclose(f2);
return 0;	
}

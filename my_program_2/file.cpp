#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("ccc.cpp","r");
	while(1)
	{
		ch=fgetc(fp);
		
		if(ch == EOF)
		break;
		
		printf("%d\n",ch);
	}
	
	printf("\n");
	fclose(fp);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char s;
	int i;
	gets(str);
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		s=str[i];
		if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' || s=='O' || s=='U' )
		continue;
		printf("%c",s);
	}
	return 0;
}

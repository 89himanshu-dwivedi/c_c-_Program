#include<iostream>
void f(char* x)
{
	x++;
	*x='a';
	
}
int  main()
{
char* str=       "hello";
	f(str);
	std::cout<<str;
	system("pause");
	return 0;
}

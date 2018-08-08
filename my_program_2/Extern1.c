#include<stdio.h>

	//int count;
		extern void add();
	 int count=9;
void add()
{
	printf("%d",count);
}

	void  main()
	{
		count =9;
		add();
		
	}


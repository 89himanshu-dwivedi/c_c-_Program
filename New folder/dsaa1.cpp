#include<stdio.h>
void tower(int,int,int,int);

int main()
{
	int no;
	scanf("%d",&no);
	
	tower(no,1,2,3);
	
	return 0;
}

void tower(int stage,int ini,int inter,int des)
{
	if(stage == 1)
	{
	
	printf("%d-->%d\n",ini,des);
	return ;
}
tower(stage-1,ini,des,inter);
	printf("%d-->%d\n",ini,des);
	
	tower(stage-1,inter,ini,des);



}

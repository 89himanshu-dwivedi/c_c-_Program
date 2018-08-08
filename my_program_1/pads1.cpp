#include<stdio.h>
#include<conio.h>
void insert_sort(int *,int  );

int main()
{
	int n,a[1000];
	printf("enter number of value\n");
	scanf("%d",&n);
//	int a[1000];
	int i;
	printf("enter the array\n");
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	
	insert_sort(a,n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	
}

void insert_sort(int *p,int size)

{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
	for(j=i-1;j>=0;j--)
	{
		if(p[j+1] < p[j])
{
	temp=p[j+1];
	p[j+1]=p[j];
	p[j]=temp;
	
	}	
	
	else
	{
		break ;
	}
	}
	
	}
	
}

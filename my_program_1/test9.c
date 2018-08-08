#include<stdio.h>

void Calculate(int *,int *,int *);
void main()
{
  int a = 0, b = 0, c = 0;
  scanf("%d",&a);
  scanf("%d",&b);
  Calculate(&a,&b,&c);
  printf("%d",c);
  getch();
}
void Calculate(int *p,int *q,int *r)
{
  *r = *p +*q;
}

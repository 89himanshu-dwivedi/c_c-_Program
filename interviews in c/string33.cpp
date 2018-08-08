
#include<string.h>
#include<stdio.h>
int main(){
  char *p;
  char s[20],s1[1];
  printf("\nEnter a string: ");
  scanf("%[^\n]",s);
  fflush(stdin);
  printf("\nEnter character: ");
  gets(s1);
  p=strpbrk(s,s1);
  printf("\nThe string from the given character is: %s",p);
  return 0;
}




#include<stdio.h>

#pragma startup start
#pragma exit end
void start();
void end();


int static i;
int main(){
   printf("\nmain function: %d",++i);
return 0;
}
void start(){
   //clrscr();
   printf("\nstart function: %d",++i);
}
void end(){
   printf("\nend function: %d",++i);
   //getch(//);
}


#include"dos.h"
#include"stdio.h"
int main()
{
union REGS ,i,o;
int x,y,k;
//show mouse pointer
i.x.ax=1;
int86(0x33,&i,&o);
while(!kbhit()) //its value will false when we hit key in the key board
{
i.x.ax=3; //get mouse position
x=o.x.cx;
y=o.x.dx;
clrscr();
printf("(%d , %d)",x,y);
delay(250);
int86(0x33,&i,&o);
}
getch();
return 0;
}


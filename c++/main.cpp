#include <stdio.h>

void foo()
{}

int main()
{
    foo();
  //  foo(1);
    foo(1,'A');
    foo(1,'A',"ABC");
    printf("ABC\n");
    return 0;
}

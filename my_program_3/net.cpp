#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
int main()
{
	execl("c:\\windows\\system32\\ipconfig", "ipconfig", 0);
 
  //system("c:\\windows\\system32\\ipconfig");
  return 0;
}

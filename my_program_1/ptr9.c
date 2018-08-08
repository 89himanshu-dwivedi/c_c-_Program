#include<stdio.h>

int getRandom()
{
	
	static int r[4];
	int i=0;
	 /* set the seed */
   srand( (unsigned)time( NULL ) );
	
	for(i=0;i<4;i++)
	{
		r[i]=rand();
		printf("%d/n",r[i]);
		
 } 
	 
	 return r;
}

void main () {
	
	
   int *p;
   int i;

   p = getRandom();
	
   for ( i = 0; i < 4; i++ ) {
      printf("*(p + [%d]) : %d\n", i, *(p + i) );
   }
 


	 
	 
	 
}



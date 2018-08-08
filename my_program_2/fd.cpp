#include<stdio.h>
 2 
 3 void main()
 4 {
 5     int rows,starNo,spaceNo;
 6     printf("Enter Rows:\n");
 7     scanf("%d",&rows);
 8 
 9     for(int i=1;i<=rows;i++)
10     {
11         starNo=i*2-1;
12         spaceNo=i+rows-starNo;
13         for(int j=0;j<spaceNo;j++)
14         {
15             printf("%c",' ');
16         }
17         for(int k=0;k<starNo;k++)
18         {
19             printf("%c",'*');
20         }
21         printf("\n");
22     }
23 
24     for(int l=0;l<3;l++)
25     {
26         for(int m=0;m<(rows*2+1)/2;m++)
27         {
28             printf("%c",' ');
29         }
30         printf("%c\n",'*');
31     }
32 }

#include <stdio.h>
#include <stdlib.h>
#define COL 4
#define ROW 4
int main() {
int arr[ROW][COL] = {
{1, 1, 1, 1},
{1, 1, 0, 0},
{1, 0, 0, 0},
{1, 1, 0, 0},
}; 
int rownum;
int i = 0, j = 0, temp, count = 0;
temp = count;
for (i = 0; i < 4; i++) {
count = 0;
for (j = 0; j < 4; j++) {
if (arr[i][j] == 0) {
count++;
}
if (count > temp) {
temp = count;
rownum = i;
}
}
}
printf("%d", rownum);
return 0;
}

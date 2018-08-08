# include <stdio.h>
int main()
{
    char *s1 = (char *)malloc(50);
    char *s2 = (char *)malloc(50);
    strcpy(s1, "Geeks");
    strcpy(s2, "Quiz");
    strcat(s1, s2);
    printf("%s", s1);
    return 0;
}

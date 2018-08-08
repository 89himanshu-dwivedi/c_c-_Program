#include<stdio.h>
#include<math.h>

int GCD(int A, int B) {
    int m = min(A, B);
    int i,gcd;
    for(i = m; i > 0; --i)
        if(A % i == 0 && B % i == 0) {
            gcd = i;
            return gcd;
        }
}

int main()
{
    int i=GCD(4,5);
    return i;
}

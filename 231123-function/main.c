#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);

int main()
{
    int result = 0;

    result = gcd(150, 35);
    printf("gcd: %d\n", result);

    result = gcd(154, 11);
    printf("gcd: %d\n", result);
    return 0;
}

int gcd(int u, int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60;    // 0011 1100
    unsigned int b = 13;    // 0000 1101
    int c,d,e,f;

    c = a & b;              // 0000 1100
    d = a | b;              // 0011 1101
    e = a ^ b;              //
    f = ~a;                 // 1100 0011

    printf("c is %d\n", c);
    printf("d is %d\n", d);
    printf("e is %d\n", e);
    printf("f is %d\n", f);

    return 0;
}

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    _Bool a = 1;
    _Bool b = 0;
    _Bool result1;
    _Bool result2;
    _Bool result3;

    result1 = a && b;
    result2 = a || b;
    result3 = !a;


    printf("\n%d \n%d \n%d \n", result1, result2, result3);

    return 0;
}

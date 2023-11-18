#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main()
{
    float rain[YEARS][MONTHS] =
    {
        {4.3,3.2,4.3,23,3.3,3.4,3.4,67,6.7,4.4,3.9,34},
        {4.3,3.2,4.3,23,3.3,3.4,3.4,67,6.7,4.4,3.9,4},
        {4.3,3.2,4.3,2.3,3.3,3.4,3.4,6.7,6.7,4.4,3.9,3.4},
        {4.3,3.2,4.3,2.3,3.3,3.4,3.4,67,6.7,4.4,3.9,32.4},
        {4.3,3.2,4.3,2.3,3.3,3.4,3.4,67,6.7,4.4,3.9,31.4}
    };

    int year, month;
    float subtot, total;

    printf("YEAR\tRAINTFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month=0, subtot=0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
        printf("%4d \t%6.1f\n", 2010 + year, subtot);
        total += subtot;
    }

    printf("\nThe yearly average is %.1f inches. \n\n", total/YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (month=0; month < MONTHS; month++)
    {
        for (year=0, subtot=0; year < YEARS; year++)
        {
            subtot += rain[year][month];

        }
        printf("%4.1f ", subtot/YEARS);
    }

    return 0;
}

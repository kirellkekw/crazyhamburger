#include <stdio.h>
#include "daysinmonth.h"


int main()
{
    int month, year;

    scanf("%d %d", &month, &year);

    printf("%d", daysinmonth(month, year));

    return 0;
}
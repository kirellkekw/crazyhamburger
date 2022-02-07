#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randomnum(int lower, int upper)
{
    int num;
    num = (rand() % (upper - lower + 1) + lower);
    printf("%d ", num);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    srand(time(0));

    randomnum(a, b);

    getch();
    return 0;
}
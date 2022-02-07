#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getrollcount()
{
    int dice;

    scanf("%d", &dice);

    return dice;
}

void roll()
{
    int m;

    m = (rand() % 6) + 1;

    printf("%d ", m);
}

int main()
{
    printf("How many dices do you want to roll?\n");

    int a, b;
    
    srand(time(0));

    a = getrollcount();

    for(b = 0; a > b; b++)
    {
        roll();
    }

    getch();
    return 0;
}
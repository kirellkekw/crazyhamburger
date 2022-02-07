#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll()
{
    int m;

    m = (rand() % 6) + 1;

    printf("%d ", m);
}

int main()
{

    int b;
    
    srand(time(0));

    for(b = 0; 2 > b; b++)
    {
        roll();
    }


    return 0;
}
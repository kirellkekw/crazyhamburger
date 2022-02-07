#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int cpunum, usernum, guesscount;
    printf("please enter a number between 1 and 100\n");

    srand(time(0));

    guesscount = 0;
    cpunum = (rand() % 100) + 1;

    for(usernum = 101; cpunum != usernum; guesscount++)
    {
        scanf("%d", &usernum);
        
        if(cpunum > usernum)
        {
            printf("Too low!\n");
        } else if(cpunum < usernum) {
            printf("Too high!\n");
        } else {
            printf("You guessed it right with %d attempts.\n", guesscount + 1);
        }

    } 

    getch();
    return 0;
}
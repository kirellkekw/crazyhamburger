#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int cpunum, usernum, guesscount;
    printf("1 ile 100 arasinda bir sayi giriniz\n");

    srand(time(0));

    guesscount = 0;
    cpunum = (rand() % 100) + 1;

    for(usernum = 101; cpunum != usernum; guesscount++)
    {
        scanf("%d", &usernum);
        
        if(cpunum > usernum)
        {
            printf("aradigin sayi daha buyuk\n");
        } else if(cpunum < usernum) {
            printf("aradigin sayi daha kucuk\n");
        } else {
            printf("dogru cevabi %d defa deneyerek buldunuz!\n", guesscount + 1);
        }

    } 

    getch();
    return 0;
}
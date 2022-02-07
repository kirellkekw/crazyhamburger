#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getcharacter();
int numgen();
void printsum(char x, int y);

char getcharacter()
{
    char m;
    m = (char)(getchar());
    return m;
}

int numgen()
{
    int randnum;

    srand(time(0));

    randnum = (rand() % 3) + 1;

    return randnum;
}

void printsum(char x, int y)
{

    if(x == 'm')
    {
        printf("sen makas sectin\n");
    } else if(x == 't') {
        printf("sen tas sectin\n");
    } else if(x == 'k') {
        printf("sen kagit sectin\n");
    } else {
        printf("yanlis bir deger girdin\n");
    }
    if(y == 1)
    {
         printf("bilgisayar makas secti\n");
    } else if(y == 2) {
        printf("bilgisayar tas secti\n");
    } else {
        printf("bilgisayar kagit secti\n");
    }    

    char pcvar;
    
    if(y == 1)
    {
        pcvar = 'm';
    } else if(y == 2) {
        pcvar = 't';
    } else {
        pcvar = 'k';
    }
    
    switch(pcvar)
    {
        case 'm':
        {
            if(x == 'm')
            {
                printf("berabere kaldiniz.");
            } else if(x == 't') {
                printf("sen kazandin.");
            } else {
                printf("bilgisayar kazandi.");
            }
        break;
        }
        case 't':
        {
            if(x == 't')
            {
                printf("berabere kaldiniz.");
            } else if(x == 'k') {
                printf("sen kazandin.");
            } else {
                printf("bilgisayar kazandi.");
            }
        break;
        }
        case 'k':
        {
            if(x == 'k')
            {
                printf("berabere kaldiniz.");
            } else if(x == 'm') {
                printf("sen kazandin.");
            } else {
                printf("bilgisayar kazandi.");
            }
        break;
        }

    }

}

int main()
{
    int generatednum;
    char userchoice;
    
    printf("lutfen seciminizi giriniz. (kagit icin k, makas icin m, tas icin t)\n");

    userchoice = getcharacter();

    generatednum = numgen();

    printsum(userchoice, generatednum);

    getch();
    
    return 0;
}
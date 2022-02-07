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

    if(x == 's')
    {
        printf("you chose scissors\n");
    } else if(x == 'r') {
        printf("you chose rock\n");
    } else if(x == 'p') {
        printf("you chose paper\n");
    } else {
        printf("you entered invalid value\n");
    }
    if(y == 1)
    {
         printf("computer chose scissors\n");
    } else if(y == 2) {
        printf("computer chose rock\n");
    } else {
        printf("computer chose paper\n");
    }    

    char pcvar;
    
    if(y == 1)
    {
        pcvar = 's';
    } else if(y == 2) {
        pcvar = 'r';
    } else {
        pcvar = 'p';
    }
    
    switch(pcvar)
    {
        case 's':
        {
            if(x == 's')
            {
                printf("its a draw.");
            } else if(x == 'r') {
                printf("you have won.");
            } else {
                printf("computer has won.");
            }
        break;
        }
        case 'r':
        {
            if(x == 'r')
            {
                printf("its a draw.");
            } else if(x == 'p') {
                printf("you have won.");
            } else {
                printf("computer has won.");
            }
        break;
        }
        case 'p':
        {
            if(x == 'p')
            {
                printf("its a draw.");
            } else if(x == 's') {
                printf("you have won.");
            } else {
                printf("computer has won.");
            }
        break;
        }

    }

}

int main()
{
    int generatednum;
    char userchoice;
    
    printf("please enter your choice.\n(s for scissors, p for paper, r for rock.)\n");

    userchoice = getcharacter();

    generatednum = numgen();

    printsum(userchoice, generatednum);

    getch();
    
    return 0;
}
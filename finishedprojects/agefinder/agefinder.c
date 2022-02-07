#include <stdio.h>

void getdate();
void printage();

void getdate()
{
    int bday, bmonth, byear, day, month, year;

    printf("Enter your birth date. (DD MM YYYY)\n");
    scanf("%d %d %d", &bday, &bmonth, &byear);

    printf("Enter today's date. (DD MM YYYY)\n");
    scanf("%d %d %d", &day, &month, &year);
    
    printage(bday, bmonth, byear, day, month, year);
}

void printage(int a, int b, int c, int d, int e, int f)
{
    int daydif, monthdif, yeardif, daycount, yearcheck;
    daydif = d - a;
    monthdif = e - b;
    yeardif = f - c;
    if(f % 4 == 0 && f % 400 != 100 && f % 400 != 200 && f % 400 != 300)
    {
        yearcheck = 1;
    } else {
        yearcheck = 0;
    }

    switch(e)
    {
        case 2:
        {
            if(yearcheck == 1)
            {
                daycount = 29;
            } else {
                daycount = 28;
            }
        break;
        }
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daycount = 31;
            break;
        default:
            daycount = 30;
            break;
    }

    if(daydif < 0)
    {
        monthdif--;
        if(monthdif < 0)
        {
            yeardif--;
            monthdif = monthdif + 12;
        }
        daydif = daydif + daycount;
    }
    
    if(monthdif < 0)
        {
            yeardif--;
            monthdif = monthdif + 12;
        }

    printf("You are ");

    if(yeardif > 1)
    {
        printf("%d years,\n", yeardif);
    } else {
        printf("&d year,\n", yeardif);
    }

    if(monthdif > 1)
    {
        printf("%d months and\n", monthdif);
    } else {
        printf("%d month and\n", monthdif);
    }

    if(daydif > 1)
    {
        printf("%d days old.", daydif);
    } else {
        printf("%d day old.", daydif);
    }
    
}

int main()
{
    getdate();
    getchar();
    return 0;
}

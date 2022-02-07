#include <stdio.h>

void getdate();
void printage();

void getdate()
{
    int bday, bmonth, byear, day, month, year;

    printf("Lutfen dogum tarihinizi giriniz. (GG AA YYYY)\n");
    scanf("%d %d %d", &bday, &bmonth, &byear);

    printf("Lutfen bugunun tarihini giriniz. (GG AA YYYY)\n");
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
        case 1:
            daycount = 31;
            break;
        case 2:
            if(yearcheck == 1)
            {
                daycount = 29;
            } else {
                daycount = 28;
            }
            break;
        case 3:
            daycount = 31;
            break;
        case 5:
            daycount = 31;
            break;
        case 7:
            daycount = 31;
            break;
        case 8:
            daycount = 31;
            break;
        case 10:
            daycount = 31;
            break;
        case 12:
            daycount = 31;
            break;
        case 4:
            daycount = 30;
            break;
        case 6:
            daycount = 30;
            break;
        case 9:
            daycount = 30;
            break;
        case 11:
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

    printf("Siz ");

    if(yeardif > 1)
    {
        printf("%d yil,\n", yeardif);
    } else {
        printf("&d yil,\n", yeardif);
    }

    if(monthdif > 1)
    {
        printf("%d ay ve\n", monthdif);
    } else {
        printf("%d ay ve\n", monthdif);
    }

    if(daydif > 1)
    {
        printf("%d gun yasadiniz.", daydif);
    } else {
        printf("%d gun yasadiniz.", daydif);
    }
    
}

int main()
{
    getdate();
    getch();
    return 0;
}

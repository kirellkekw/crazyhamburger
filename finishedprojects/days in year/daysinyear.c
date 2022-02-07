#include <stdio.h>

//function that returns entered year's bool state leap year 
int leapCheck(int year);

//function that returns day count of entered month
int daysInMonth(int month, int year);

//function that returns difference of days between 01.01 and entered date
int calcDayDiff(int day, int month, int year);

//function that prints entered int value
void printInt(int daydiff);

int leapCheck(int year)
{
    //shows if a year is leap year or not
    int yearCheck;
    
    if(year % 4 == 0 && year % 400 != 100 && year % 400 != 200 && year % 400 != 300)
    {
        yearCheck = 1;
    } else {
        yearCheck = 0;
    }
    
    return yearCheck;
}


int daysInMonth(int month, int year)
{
    //variable that indicates day count of specified month
    int dayCount;
    
    switch(month)
    {
        case 2:
        {
            if(leapCheck(year) == 1)
            {
                dayCount = 29;
            } else {
                dayCount = 28;
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
            dayCount = 31;
            break;
        default:
            dayCount = 30;
            break;
    }
    
    return dayCount;
}


int calcDayDiff(int day, int month, int year)
{
    int dayCount;
    
    //difference of days between 01.01 and entered date
    int daydiff;
    
    daydiff = 1;
    
    for(; month > 1; month--)
    {
        daydiff = daydiff + daysInMonth(month, year);
    }
    
    if(day != 1)
    {
        daydiff = daydiff + day;
    }
    
    return daydiff;
}


int main()
{
    int day, month, year;
    
    printf("enter value\n");

    scanf("%d %d %d", &day, &month, &year);

    printf("%d", calcDayDiff(day, month, year));
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int daysinmonth(int month, int year)
{
    int leapcheck, daycount;
    if(year % 4 == 0 && year % 400 != 100 && year % 400 != 200 && year % 400 != 300)
    {
        leapcheck = 1;
    } else {
        leapcheck = 0;
    }

    switch(month)
    {
        case 2:
        {
            if(leapcheck == 1)
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
        {
            daycount = 31;
            break;
        }
        default:
        {
            daycount = 30;
            break;
        }

    }
    
    return daycount;
}
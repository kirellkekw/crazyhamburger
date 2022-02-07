#include <stdio.h>
#include "testlib.h"

int leapchecker(int checkedyear);
int calcdiff(int day, int month, int year);

//variable that gets tested whether it is leap year or not
int leapchecker(int checkedyear)                         
{
   //bool type variable of if a year is leap year or not
   int leapcheck;                                   
   
   if(checkedyear % 4 == 0 && checkedyear % 400 != 100 && checkedyear % 400 != 200 && checkedyear % 400 != 300)
   {
      leapcheck = 1;
   } else {
      leapcheck = 0;
   }

   return leapcheck;
}


// date input received from the user
int calcdiff(int day, int month, int year)
{   
   // 1
   int baseyear;

   baseyear = 1;

   int montharray[12];

   int j;

   for(j = 0; j < 12; j++)
   {
      switch(j + 1)
      {
        case 2:
         {
            if(leapchecker(year) == 1)
            {
                montharray[j] = 29;
            } else {
                montharray[j] = 28;
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
            montharray[j] = 31;
            break;
         }
        default:
         {
            montharray[j] = 30;
            break;
         }
      }
   }
   
   // array that contains day counts of years from 1 to 4000 including leap years
   int yeararray[4000];         

   int i;

   for(i = 0; i < 4000; i++)
   {
      if(leapchecker(i+1) == 1)
      {
         yeararray[i] = 366;
      } else {
         yeararray[i] = 365;
      }
   }

   //difference between 01.01.01 and entered date in case you already didnt notice it
   int daydifference;

   daydifference = 0;

   while(year > baseyear)
   {
      if(leapchecker(baseyear) == 1)
      {
         daydifference += 366;
      } else {
         daydifference += 365;
      }

      baseyear++;
   }

   while(month > 1)
   {
      daydifference = daydifference + montharray[month - 2];
      month--;
   }

   daydifference = daydifference + day - 1;
   

   return daydifference;
}


void get_weekday(int daydifference)
{
   // mod 7 value of daydifference variable
   int m;

   m = (daydifference % 7);

   switch(m)
   {
      case 0:
         printf("monday");
         break;
      case 1:
         printf("tuesday");
         break;
      case 2:
         printf("wednesday");
         break;
      case 3:
         printf("thursday");
         break;
      case 4:
         printf("friday");
         break;
      case 5:
         printf("saturday");
         break;
      case 6:
         printf("sunday");
         break;
   }
}


int main()
{
   // mod 7 value of daydifference variable
   int sum;

   int day, month, year;
   printf("enter the date you want to check\n");

   while(year != -1)
   {
   scanf("%d %d %d", &day, &month, &year);

   sum = calcdiff(day, month, year);

   get_weekday(sum);

   printf("\n");

   }
   printf("you decided to end the program");
   getch();
   return 0;
}
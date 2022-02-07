#include <stdio.h>
int maxnum(num1, num2, num3)
{
int bignum;

if (num1 > num2 && num1 > num3)
    bignum = num1;
else if (num2 > num1 && num2 > num3)
    bignum = num2;
else if (num3 > num1 && num3 > num2)
    bignum = num3;

    return bignum;
}

int x, y, z;
int main()
{
scanf("%d %d %d", &x,&y,&z);
printf("%d", maxnum(x,y,z));
    getch();
    return 0;
}
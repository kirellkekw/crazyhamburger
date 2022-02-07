#include <stdio.h>
int main()
{
printf("16'dan kucuk bir sayi giriniz\n");
int height, a, b, row;
scanf("%d", &height);
b = height - row;
row = 1;
while(row <= height)
{
    a = 1;
    while(a <= row)
    { while(b >= 0) {
        printf(" ");
    }
    a++;
    printf("*");
    }

    printf("\n");
++row;
}
getch();
return 0;
}
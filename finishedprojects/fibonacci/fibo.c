#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
    return 1;
    else
    {
        return fib(n-1) + fib(n-2);
    }

}

int main(){

int a, b;
b = 1;
scanf("%d", &a);
while(b <= a)
{
    printf("%d", fib(b));
    printf(" ");
    b++;
}



    return 0;
}

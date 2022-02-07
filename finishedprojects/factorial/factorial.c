#include <stdio.h>

int main(){
int a, b, c;
b = 1;
c = 1;

scanf("%d",&a);

while(a > b)
{
    ++b;
    c = c * b;
    printf("%d ", c);
}


return 0;
}
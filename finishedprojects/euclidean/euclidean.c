#include <stdio.h>
#include <math.h>

void printing(float distance);
void euclidean(int m[], int n[]);

void getinput()
{
    int a1, a2, b1, b2;
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
    int a[] = {a1, a2};
    int b[] = {b1, b2};
    euclidean(a, b);
}

void euclidean(int m[], int n[])
{
    float x, y, dist;
    x = m[0] - n[0];
    y = m[1] - n[1];
    dist = sqrt((pow(x, 2) + pow(y, 2)));
    printing(dist);
}

void printing(float distance)
{
    printf("%f", distance);
}

int main()
{      
    getinput();
    getch();
    return 0;
}
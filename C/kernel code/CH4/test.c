#include<stdio.h>

int main(void)
{
    int k= 5; int l = 3;
    printf("%d %d\n", k /l, k % l);

    printf("%d\n",-8 /-5);

    int i = 2; int j = 3;
    printf("%d\n", (i + 10) % j);

    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);

    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);

    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);

    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);
}
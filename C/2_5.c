#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    printf("Please enter x : ");
    scanf("%d", &x);
    printf("The answer is : %d", 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6);
}
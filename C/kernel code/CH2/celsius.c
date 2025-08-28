#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    #ifdef DEBUG

    #elif !defined(DEBUG)
        printf("Enter Fahrenheit temperture: ");
    #endif

    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("ANSI C compliant compiler, __STDC__ = %s\n", __STDC__);

    printf("Celsius equivalent: %.1f\n",celsius);

    return 0;
}
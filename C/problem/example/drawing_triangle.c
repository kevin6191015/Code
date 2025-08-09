#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 *   Draw a triangle
 *   *
 *   **
 *   ***
 *   ****
 *   *****
 *
 */
int main(int argc, char *argv[])
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    char str[100]  = "CHAMELEON: ADAPTIVE CODE OPTIMIZATION FOR EXPEDITED DEEP NEURAL NETWORK COMPILATION";
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
        printf("%c",str[i]);
    }
}
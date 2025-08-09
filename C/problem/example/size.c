#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

typedef struct
{
    int x;
    int y;
    char *description;
} Point;

int main(void)
{
    Point a1;
    a1.x = 10;
    a1.y = 20;
    a1.description = "this is string a1!";

    printf("The sizeof char is : %zu byte\n", sizeof(char));
    printf("The sizeof int is : %zu byte\n", sizeof(int));
    printf("The sizeof double is : %zu byte\n", sizeof(double));
    printf("The sizeof float is : %zu byte\n", sizeof(float));
    printf("The sizeof long long int is : %zu byte\n", sizeof(long long int));
    printf("The sizeof unsigned long long is : %zu byte\n", sizeof(unsigned long long int));
    printf("The range of 'int' is from %d to %d\n", INT_MIN, INT_MAX);
    printf("The range of 'unsigned int' is from 0 to %u\n", UINT_MAX);
    printf("The range of 'long' is from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("The range of 'unsigned long' is from 0 to %lu\n", ULONG_MAX);
    printf("The range of 'unsigned long long' is from 0 to %llu\n", ULLONG_MAX);
    printf("The range of 'float' is from %e to %e\n", FLT_MIN, FLT_MAX);
    printf("The range of 'double' is from %e to %e\n", DBL_MIN, DBL_MAX);

    printf("Size of unsigned long: %zu\n", sizeof(unsigned long));
    printf("Size of unsigned long long: %zu\n", sizeof(unsigned long long));

    printf("The sizeof char* is : %zu byte\n", sizeof(char *));
    printf("The sizeof int* is : %zu byte\n", sizeof(int *));
    printf("The sizeof double* is : %zu byte\n", sizeof(double *));
    printf("The sizeof float* is : %zu byte\n", sizeof(float *));
    printf("Your system is: %lu-bit\n", sizeof(void *) * 8);
    printf("\nStruct.... \n");
    printf("a1.x : %d\n", a1.x);
    printf("a1.y : %d\n", a1.y);
    printf("a1.y : %s\n\n", a1.description);

    int *a;
    a = calloc(5, sizeof(int *));
    a[0] = 1;
    a[1] = 2;
    for (int i = 0; i < 5; i++)
        printf("a[%d] : %d\n", i, a[i]);

    int x;
    int *pointer_of_x;
    pointer_of_x = &x;

    // printf("original x :  %d\n",x);
    // printf("original x address:  %p\n",pointer_of_x);
    // printf("Please enter x : ");
    // scanf("%d", &x);
    // printf("use %d to calculate\n",x);
    // printf("after read x address:  %p\n",pointer_of_x);
    // printf("The answer is : %d", 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6);
    return 0;
}
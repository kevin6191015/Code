#include <stdio.h>

void add(int *a);

void add_array(int a[]);

void add_array_ptr(int *a);

int main(void)
{
    int a = 5;
    add(&a);
    printf("a:%d\n", a);
    /* array與一般的變數不同，在傳遞array作為參數時，array會退化成pointer
     * 因此可以在函式中改變array中的數值
     * 傳遞array作為參數實際上就是傳遞pointer兩個沒有不同，
     * 且此方式為pass by reference(pass by pointer)
     */
    int b[] = {1, 2, 3, 4, 5};
    add_array(b);
    add_array_ptr(b);
    printf("'b' array pointer:%p\n", b);
    printf("b[0]:%d\n", b[0]);
    printf("b[1]:%d\n", b[1]);
}

void add_array_ptr(int *a)
{
    printf("function ptr 'a' array pointer:%p\n", a);
    a[1] += 1;
}

void add_array(int a[])
{
    printf("function 'a' array pointer:%p\n", a);
    a[0] += 1;
}
void add(int *a)
{
    *a = *a + 1;
}
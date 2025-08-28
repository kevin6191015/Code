#include <stdio.h>

int f(int *restrict a, int *restrict b) {
    *a = 1;
    *b = 2;       // 若 a、b 互不重疊，這不會影響 t
    return *a;     // → 編譯器可回傳 1
}

int main(void) {
    int x = 0;
    printf("%d\n", f(&x, &x));  // 傳入同一地址：違反 restrict 承諾 → UB
}

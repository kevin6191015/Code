#include<stdio.h>
#include<stdlib.h>

int GCD_loop(int, int);

int GCD_recusive(int, int);

int main(void)
{
    int num1, denom1, num2, denom2, result_sum, result_denom, gcd;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2 , &denom2);

    // printf("Enter first fraction: ");
    // scanf("%d/%d", &num1, &denom1);

    // printf("Enter second fraction: ");
    // scanf("%d/%d", &num2 , &denom2);

    result_sum = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    gcd = GCD_loop(abs(result_sum), abs(result_denom));
    // printf("GCD of %d and %d is %d\n", result_sum, result_denom, gcd);

    result_sum   /= gcd;
    result_denom /= gcd;

    // 調整負數分母 (讓分母永遠是正數)
    if (result_denom < 0) {
        result_denom = -result_denom;
        result_sum   = -result_sum;
    }

    // 判斷是否能化成整數
    if (result_denom == 1){
        printf("The sum is %d\n", result_sum);
    }else{
        printf("The sum is %d/%d\n", result_sum, result_denom);
    }
        
    return 0;
}

int GCD_loop(int a, int b)
{
    while(b){
        int t = b;
        b =  a % b;
        a = t;
    }
    return a;
}

int GCD_recursive(int a, int b)
{
    if (b == 0) return a;
    return GCD_recursive(b, a % b);
}
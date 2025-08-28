#include<stdio.h>
#include<string.h>

int main(void)
{
    int x1,x2;
    char c1,c2;
    char s1[20];
    int num;
    printf("Please enter two character:");
    num = scanf("%c %c",&c1,&c2);
    printf("c1:%c,c2:%c\n", c1, c2);
    printf("total read in number: %d\n",num);

    printf("Please enter one number and one character:");
    scanf("%d", &x1);
    scanf(" %c", &c1); //這邊前面的空格可以忽視零個到多個輸入的空白
    printf("x1:%d,c1:%c\n", x1, c1);

    return 0;
}
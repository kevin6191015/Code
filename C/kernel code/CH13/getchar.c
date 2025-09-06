#include<stdio.h>
#define STR_LEN 10


int read_line(char * s1, int n)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n'){
        if(i < n){
            s1[i++] = ch;
        }
    }
    s1[i] = '\0';
    return i;
}

int count_space(const char *s) //這邊的const是在防止指標指到的字元被改變
{
    int count = 0;
    while(*s){
        if(*s == ' '){
            count++;
        }
        s++;
    }
    return count;
}


int main(void)
{
    char s1[STR_LEN + 1];
    read_line(s1, STR_LEN);
    printf("%s\n", s1);

    char s2[STR_LEN + 1] = "aa bb  cc ";
    printf("space in string : %d", count_space(s2));
    printf("%s\n", s2);
}
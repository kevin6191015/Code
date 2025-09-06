#include<stdio.h>

size_t strlen (const char *s){
    const char *p = s;
    while(*s++)
    ;
    return s - p;
}

char* strcat(char* s1, const char* s2){
    char *p = s1;
    while(*p)
        p++;
    while(*p++ = *s2++);
    return s1;
}

int main(void){
    char s[20]= "123456";
    char s1[20]= "123";
    char s2[20]= "45678";

    strncpy(s1, s2, sizeof(s1) - 1);   // 預留 1 格給 '\0'
    s1[sizeof(s1) - 1] = '\0'; 

    printf("s length: %d\n",strlen(s));
    printf("s1 : %s",strcat(s1,s2));

}

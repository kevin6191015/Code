#include<stdio.h>
#define NAME_LEN 20

int main(void){
    struct{
        int number;
        char name [NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "Disk drive", 10},
      part2 = {914};
    printf("%s\n%d",part2.name, part2.on_hand);
}


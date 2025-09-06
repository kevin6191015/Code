#include<stdio.h>
#define NAME_LEN 20

int main(void){
    struct{
        int number;
        char name [NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "Disk drive", 10},
      part2 = {914};

    printf("number: %d\nname: %s\non_hand: %d",part2.number, part2.name, part2.on_hand);

    struct Part{ //structure tag
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    };

    struct Part part3 = {23, "Monitor", 41};
    printf("\n\nnumber: %d\nname: %s\non_hand: %d",part3.number, part3.name, part3.on_hand);

    typedef struct part{ // typedef with tag
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
        struct part *next;
    } part;
    
    part part4 = {25, "power supply", 32};
    struct part part5 = {29, "audio equipment", 2};

    part5.next = &part4;

    printf("\n\nnumber: %d\nname: %s\non_hand: %d",part4.number, part4.name, part4.on_hand);
    printf("\n\nnumber: %d\nname: %s\non_hand: %d",part5.number, part5.name, part5.on_hand);

    printf("\n\nnumber: %d\nname: %s\non_hand: %d",part5.next -> number, (*part5.next).name, (*part5.next).on_hand);
    
}


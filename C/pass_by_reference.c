#include <stdio.h>
#include <stdlib.h>

/*
 * echo $LastExitCode 
 * 可以查看上一個執行的程式的結束所返回的值
 */
void swap(int a,int b);
void swap2(int* a,int* b);
int main(int argc, char* argv[] ){
    int a = 1;
    int b = 2;
    swap(a,b);
    printf("a:%d\nb:%d\n",a,b);
    /*
     * pass by reference可以透過pointer來實現，
     * 傳入函式中的參數是記憶體位置，可以正確修改記憶體中的值
     * pass by reference不像pass by value會受到只能回傳一個變數的限制
     * 他能在函式改變多個變數的值，如：上面的a,b的值
     * pass by reference傳入的參數是有固定大小的，可以省下傳參數的執行時間
     * 
     */
    swap2(&a,&b);
    printf("a:%d\nb:%d\n",a,b);
    return 0;
}

void swap2(int* a,int* b){
    int temp;
    //* operator可以讀取此記憶體位置中的數值
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
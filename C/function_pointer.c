#include <stdio.h>

int add (int x, int y ){
    return x + y;
}

int sub (int x, int y){
    return x - y;
}

int mul (int x, int y){
    return x * y;
}
/*
* 此函式很不好懂 需要多加注意 
*
* select_operation()這個函式會回傳
* 參數為兩個int且回傳值為int的函數的指標
*/
int (*select_operation())(int,int){ 
    int choose;
    printf("Please choose the operation to perform:\n");
    printf("1) add\n");
    printf("2) subtract\n");
    printf("3) multiply\n");
    printf("Enter:");
    scanf("%d",&choose);

    if(choose == 1) return add;
    else if(choose == 2 )return sub;
    else if(choose == 3 )return mul;
    else return NULL;
}

int main (int argc , char* argv[]){
    /*  
     *  函式名稱也是此函式的指標有點像array名稱直接使用會退化成array指標
     *  因此add相當於&add
     */
    int a = 6;
    int b = 7;
    int (*add_pointer)(int,int) = &add;
    int result = add_pointer(a,b);
    printf("The result of add using function pointer is : %d\n",result);

    //可用此方式指定想要使用的function
    int (*operation_array[])(int,int) = {add ,sub, mul};
    result = operation_array[0](a,b);
    printf("The result of add using function pointer array is : %d\n",result);

    //撰寫一個會回傳函式指標的函式，有函式指標就可以傳參數使用此函式
    int (*operation)(int, int) = select_operation();
    printf("The result is : %d\n",operation(a,b));
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
/*
 * function pointer : 回傳值 (* 指標名稱) (參數列表)
 * 函式指標並不分配記憶體空間(不使用heap的空間)
 * 函式指標是指向指令的指標
 * 並不是指向資料的指標
 * 因此也不能使用pointer arithmetic
 * 
 */
int add (int x, int y ){
    return x + y;
}

int sub (int x, int y){
    return x - y;
}

int mul (int x, int y){
    return x * y;
}

int mul3 (int x, int y, int z){
    return x * y * z;
}

bool check_C(int temperature){
    if(temperature <= 0) return true;
    else return false;
}

bool check_F(int temperature){
    if(temperature <= 32) return true;
    else return false;
}
/*
 * 
 * 這邊將函數指標作為函式的參數輸入 
 * 因為不確定溫度是用攝氏還是華氏 (freeze_check的輸入可以是華氏也可以是攝氏)
 * 所以要用函數指標作為函式的參數輸入 
 * 
 */
void is_freezing( bool (*freeze_check) (int) ){
    int temperature = 0;
    printf("Please enter the temperature : ");
    scanf("%d",&temperature);
    if(freeze_check(temperature)){
        printf("It is freezing !\n");
    }else{
        printf("It is not freezing !\n");
    }
}

/*
 * 這邊將函數指標作為函式的回傳值
 * select_operation()這個函式會回傳
 * 參數為兩個int且回傳值為int的函數的指標
 * 也就是add,sub,mul
 */
int (*select_operation())(int,int){ 
    int choose;
    printf("Please choose the operation to perform : \n");
    printf("1) add\n");
    printf("2) subtract\n");
    printf("3) multiply\n");
    printf("Enter: ");
    scanf("%d",&choose);

    if(choose == 1) return add;
    else if(choose == 2 )return sub;
    else if(choose == 3 )return mul;
    else return NULL;
}

int main (int argc , char* argv[]){
    /*  
     * 函式名稱也是此函式的指標
     * 有點像array名稱直接使用會退化成array指標
     * 因此add相當於&add
     * 
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


    //因為傳入不同的call back function所以會有不同的結果
    printf("\nCelsius...\n");
    is_freezing(check_C);
    is_freezing(check_C);

    printf("\nFahrenheit...\n");
    is_freezing(check_F);
    is_freezing(check_F);
    return 0;
}
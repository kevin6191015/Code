//local variable will be free after function call
#include <stdio.h>
#include<stdlib.h>
void print(){
	printf("Hello World\n");
}
int* Add(int* a,int* b){
	int* c=(int*)malloc(sizeof(int));
	*c=*a+*b;
	return c;
}
int main(){
	int a=5,b=10;
	int* c=Add(&a,&b);
	print();
	printf("%d",*c);
}

//malloc void* malloc(n*sizeof(type)) 
//calloc void* calloc(num,sizeof(c))  also calloc initialize all value to 0 
//realloc void* realloc(void* ptr,sizeof(type))
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int* A=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		*(A+i)=i+1;
	}
	int* B=(int*)realloc(A,n/2);
	printf("B address = %d,A address = %d\n",A,B);
	//A[2] = 6;
	for(i=0;i<n/2;i++){
		printf("%d ",B[i]);//free but can modify value depend on machine
	}
} 

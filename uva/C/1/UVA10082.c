#include <stdio.h>
#include <string.h>
int main(){
char a;
int j;
char in[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while((a = getchar())!=EOF){
		if(a == ' ' || a == '\n'){
			printf("%c", a);
		}else{
			for(j = 0 ; j < strlen(in) ; j++){
				if(a == in[j]) printf("%c",in[j-1]);
			}
		}
	}
	return 0;
}
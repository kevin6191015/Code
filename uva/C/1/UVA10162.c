#include <stdio.h>
#include <string.h>
int main(){
	char b[200];
	int a[20]={0,1,5,2,8,3,9,2,8,7,7,8,4,7,3,8,4,1,5,4};
	while(scanf("%s",&b) && b[0] != '0'){
		int l = strlen(b);
		int c = b[l-1] - '0';
		if(l>1) c = c + (b[l-2]-'0') * 10;
		printf("%d\n",(a[  c  % 20 ] + c / 20 * 4) % 10);
	}
	return 0;
}
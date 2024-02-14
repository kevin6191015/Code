
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int cases;
	char in[20];
	scanf("%d",&cases);
	getchar();
	getchar();
	while(cases--){
		while( gets(in) && in[0] != '\0'){
			char* a;
			int b,c,d;
			char e;
			a = strtok(in," ");
			b = atoi(a);
			a = strtok(NULL," ");
			c = atoi(a);
			a = strtok(NULL," ");
			d = atoi(a);
			a = strtok(NULL," ");
			e = *a;
			
			printf("%d %d %d %c\n",b,c,d,e);
		}
		printf("\n");
		
		
	
	}
	
	

}


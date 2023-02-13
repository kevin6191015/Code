#include <stdio.h>
#include <string.h>
int main(){
	char a[35];
	char b[100];
	int i;
	for(i = 0;i < 35;i++){
		a[i] = '0';
	}
	a[0]='A';a[4]='3';a[7]='H' ;a[8]='I' ;a[9]='L' ;a[11]='J' ;a[12]='M' ;a[14]='O' ;a[18]='2' ;a[19]='T' ;
	a[20]='U' ;a[21]='V' ;a[22]='W' ;a[23]='X' ;a[24]='Y' ;a[25]='5' ;a[26]='1' ;a[27]='S' ;a[28]='E' ;a[30]='Z' ;a[33]='8' ;
	while(scanf("%s",b)!= EOF){
		bool pali = true ,mior = true;
		for(i = 0;i <= strlen(b)/2; i++){
			if( b[i] != b[strlen(b) - i -1] && pali){
				pali = false;
			}
			if( (b[i] - 'A') < 0){
				if( a[ b[i] - 'A' + 17 + 25 ] != b[strlen(b)- i -1] && mior ){
					mior = false;
				}
			}else{
				if( a[ b[i] - 'A'] != b[strlen(b) - i-1] && mior ){
					mior = false;
				}
			}
		}
		if( mior == true && pali == true){
			printf("%s -- is a mirrored palindrome.\n",b);
		}else if(mior == true && pali == false){
			printf("%s -- is a mirrored string.\n",b);
		}else if(mior == false && pali == true){
			printf("%s -- is a regular palindrome.\n",b);
		}else{
			printf("%s -- is not a palindrome.\n",b);
		}
		printf("\n");
	}
	
}
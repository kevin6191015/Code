#include <stdio.h>
#include <math.h>
int i ,F[1048576];
int main(){
	int n,m;
	while(scanf("%d %d",&n,&m) == 2){
		i = 1;
		int count = 0;
		int b = pow(2,m);
		F[0] = 0; F[1] = 1;
		while(  count != 3 && m != 0)
		{
			F[i+1] = (F[i] + F[i-1]) % b;
			if(F[i+1] == 1){
				count++;
			}
			i++;
		}
		/*for(int j=0;j<=i;j++)
			printf(" %d",F[j]);
			*/
		if(n > 1 && m != 0 && m != 1){
			printf("%d\n",F[( n - 2) % (i - 1) + 2]);
		}else if( m == 1){
			printf("%d\n",F[( n - 2) % (i - 2) + 2]);
		}
		else if( m == 0 || n == 0){
			printf("%d\n",0);
		}else{
			printf("%d\n",F[i]);
		}
	}
	return 0;
}




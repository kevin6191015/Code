#include <stdio.h>
#include <math.h>
#define EPS 1e-9
int main(){
	double a,b,e,f;
	while(scanf("%lf %lf",&a,&b)==2){
		e = ((a + b) - sqrt((a*a)-(a*b)+(b*b)))/6 + EPS;
		if(a > b) f = b / 2;
		else f = a / 2;
		printf("%.3lf 0.000 %.3lf\n",e, f + EPS);
	
	}
	return 0;
}

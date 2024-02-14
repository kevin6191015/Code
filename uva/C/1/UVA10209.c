#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main(){
	double a,b,c,d;
	while(scanf("%lf",&a) != EOF){
		b = (a*a) - (PI*a*a/6) - (sqrt(3)*a*a/4);
		c = (a*a) - (PI*a*a/4) - (2*b) ;
		d = (a*a) - c*4 - b*4;
		printf("%.3lf %.3lf %.3lf\n",d,c*4,b*4);
	}
	return 0;
}
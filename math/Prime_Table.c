#include <stdio.h>
#include <stdbool.h>

#define  mxn  500000001
bool prime[mxn];
long long int count=0;

void eratosthenes()
{

    prime[0] = false;
    prime[1] = false;

    for (int i=2; i*i<=mxn; i++)
        if (prime[i])
            // 刪掉質數i的倍數，從i倍開始
            for (int j=i*i; j<=mxn; j+=i)
                prime[j] = false;

    
    
}
int main(){
    //memset(prime,true,sizeof(prime));
    for(int  i=0;i<mxn;i++){
        prime[i]=true;
    }

    eratosthenes();

    for(int i=0;i<mxn;i++){
        if(prime[i]){
            count++;
        }
    }

    printf("%lld",count);
}
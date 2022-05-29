#include <bits/stdc++.h>
using namespace std;

bool prime[1000000001];

int main(){
    long long a,ans=0;

    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 100000001; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 100000001; i += p)
                prime[i] = false;
        }
    }
 
    while(cin>>a){
        if(a<5){
            cout<<a<<" is not the sum of two primes!"<<endl;
        }else if(a%2==1){
            if(prime[a-2])cout<<a<<" is the sum of 2 and "<<a-2<<"."<<endl;
            else cout<<a<<" is not the sum of two primes!"<<endl;
        }else{
            for(int i=(a-1)/2;i>=3;i--){
                if(i%2==0)continue; 
                if(prime[i]&&prime[a-i]){ans=a-i;break;}
            }
            if(ans==0)cout<<a<<" is not the sum of two primes!"<<endl;
            else{
                cout<<a<<" is the sum of "<<min(ans,a-ans)<<" and "<<max(ans,a-ans)<<"."<<endl;
            }
        }
        
    }
    cout<<endl;
}



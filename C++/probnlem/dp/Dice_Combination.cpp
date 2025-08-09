#include <bits/stdc++.h>
using namespace std;
int main(){

    int num,mod=1e9+7;
    cin>>num;
    vector <long long> dp(num+1,0);
    
    dp[0]=1;
    for(int i=1; i<=num; i++){
        for(int j=1;j<=6;j++){
            if(j>i)break;
            else dp[i]=( dp[i] + dp[i-j] ) % mod;
        }
    }
    cout<<dp[num];
}
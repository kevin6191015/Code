#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int input[num+1];
    for(int i=1;i<=num;i++){
        cin>>input[i];
    }
    int dp[num+1];
    for(int i=1;i<=num;i++){
        dp[i]=1;
    }
    for(int i=2;i<=num;i++){
        for(int j=1;j<i;j++){
            if(input[i]>input[j])dp[i]=max(dp[j]+1,dp[i]);
            else continue;
        }
    }
    cout<<*max_element(dp+1, dp + num +1);
    /*for(int i=1;i<=num;i++){
        cout<<dp[i]<<" ";
    }*/
}//O(n^2)
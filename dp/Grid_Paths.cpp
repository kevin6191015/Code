#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,mod=1e9+7;
    cin>>num;
    char grid[num+1][num+1];
    int dp[num+1][num+1];
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cin>>grid[i][j];
            dp[i][j]=-1;
        }
    }
    for(int i=1;i<=num;i++){
        if(grid[i][1]=='*'){dp[i][1]=0;break;}
        else dp[i][1]=1;
    }
    
    for(int j=1;j<=num;j++){
        if(grid[1][j]=='*'){dp[1][j]=0;break;}
        else dp[1][j]=1;
    }

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(dp[i][j]==0||dp[i][j]==1)continue;
            else if(grid[i][j]=='*')dp[i][j]=0;
        }
    }
    
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(dp[i][j]==0||dp[i][j]==1) continue;
            else dp[i][j]=( ( (j-1 ==0 ) ? 0 : dp[i][j-1] )+ ( ( i-1 == 0 ) ? 0 : dp[i-1][j] ) ) % mod;
        }
    }

    cout<<dp[num][num];

    /*for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	int price[n+1];
	int page[n+1];
	for(int i=1;i<=n;i++){
		cin>>price[i];
	}
	
	for(int i=1;i<=n;i++){
		cin>>page[i];
	}
	
	int dp[n+1][x+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=x;j++){
			if(i==0||j==0)dp[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x;j++){
			dp[i][j] = max( ((j-price[i]) < 0) ? 0 : page[i]+dp[i-1][j-price[i]]//take
									 , dp[i-1][j]);//don't take
		}
	}
	/*for(int i=0;i<=n;i++){
		for(int j=0;j<=x;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<dp[n][x];
}

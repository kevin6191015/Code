#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	long long input[num+1];
	for(int i=1;i<=num;i++){
		cin>>input[i];
	}
	long long dp[num+1][num+1];
	for(int i=1;i<=num;i++){
		dp[i][i]=input[i];
	}
	long long sum[num+1];
	sum[0]=0;
	for(int i=1;i<=num;i++){
		sum[i]=sum[i-1]+input[i];
	}
	for(int diagonal=1;diagonal<=num-1;diagonal++){
		for(int i=1;i<=num-diagonal;i++){
			int j=i+diagonal;
			long long first=dp[i][i]+sum[j]-sum[i]-dp[i+1][j];
			long long last=dp[j][j]+sum[j-1]-sum[i-1]-dp[i][j-1];
			dp[i][j]=max(first,last);
		}
	}
	cout<<dp[1][num]<<endl;
	/*for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
}

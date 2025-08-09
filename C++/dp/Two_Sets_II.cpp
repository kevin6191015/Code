#include <bits/stdc++.h>
using namespace std;

int main(){
	int num,mod = 1e9+7;
	cin>>num; 
	if((num+1)*num%4!=0){
		cout<<"0"<<endl;
	}else{
		int sum=(num+1)*num/4;
		long long dp[num+1][sum+1];
		
		for(int i=0;i<=sum;i++){
				dp[0][i]=0;
		}
		dp[0][0]=1;
		for(int i=1 ; i<=num ; i++){
			for(int j=0;j<=sum;j++){
				dp[i][j] = (((j<i) ? 0 : dp[i-1][j-i] )+ dp[i-1][j]) % mod;
			}
		}
		for(int i=0;i<=num;i++){
			for(int j=0;j<=sum;j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		//cout<<( dp[num][sum]*500000004 ) % mod;
	}
}

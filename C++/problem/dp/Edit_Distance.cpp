#include<bits/stdc++.h>
using namespace std;
int editdis(string str1,string str2,int m,int n){
	int ed[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0)ed[i][j]=j;
			else if(j==0)ed[i][j]=i;
			else if(str1[i-1]==str2[j-1])ed[i][j]=ed[i-1][j-1];
			else ed[i][j] = 1 + min(min(ed[i-1][j],ed[i-1][j-1]),ed[i][j-1]);
		}
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout<<ed[i][j]<<" ";
		}
		cout<<endl;
	}
	return ed[m][n];
}

int main(){
	string str1;
	string str2;
	cin>>str1>>str2;
	cout<<editdis(str1,str2,str1.length(),str2.length());
	return 0;
}

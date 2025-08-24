#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[],int length){
	int min=1e5;
	for(int i=1;i<length;i++){
		if(arr[i]<min)min=arr[i];
	}
	return min;
}
int retangle(int a,int b){
	
	int re[a+1][b+1]={};
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(i==1)re[i][j]=j-1;
			else if(j==1)re[i][j]=i-1;
		}
	}
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(i==j||i==1||j==1)continue;
			int temp1[a+1]={};
			int temp2[b+1]={};
			for(int k=1;k<i;k++){
				temp1[k]=1+re[k][j]+re[i-k][j];
			}
			
			for(int k=1;k<j;k++){
				temp2[k]=1+re[i][k]+re[i][j-k];
			}
			re[i][j]=min(findmin(temp1,i),findmin(temp2,j));
		}
	}
	/*for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			cout<<re[i][j]<<" ";
		}
		cout<<endl;
	}*/
	return re[a][b];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(); 
	int a,b;
	cin>>a>>b;
	cout<<retangle(a,b);
} 

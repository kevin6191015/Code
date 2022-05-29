#include<bits/stdc++.h>
using namespace std;
#define MAX 9999
int floy[5000][5000];

int main(){
	int a,b,c,d,maxi,cases=1;
	while(cin>>a>>b&&a&&b){
		for(int i=0;i<5000;i++){
			for(int j=0;j<5000;j++){
			if(i==j)floy[i][j]=0;
			else	floy[i][j]=MAX;
			}
		}
		floy[a][b]=1;
		maxi=max(a,b);
		while(cin>>c>>d&&c&&d){
			floy[c][d]=1;
			if(maxi<max(c,d)){maxi=max(c,d);}
		}
		for(int k=1;k<=maxi;k++){
			for(int i=1;i<=maxi;i++){
				for(int j=1;j<=maxi;j++){
					if(floy[i][j]>floy[i][k]+floy[k][j])floy[i][j]=floy[i][k]+floy[k][j];
				}
			}
		}
		int count=0,distance=0;
		for(int i=1;i<=maxi;i++){
			for(int j=1;j<=maxi;j++){
				if(i!=j&&floy[i][j]!=MAX){
					distance+=floy[i][j];
					count++;
				}
			
			}
		
		}
		printf("Case %d: average length between pages = %.3f clicks\n",cases++,(double)distance/count);
	
	}


}

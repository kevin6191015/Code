#include <bits/stdc++.h> 
#define MAX 50005
using namespace std;
int adj[1000][1000];
int vis[1000];
int dis[1000];
int n,m,S,T,a,b,c;

void djs(int x){
	vis[x]=1;
	//update
	for(int i=0;i<n;i++){
		if(vis[i]==0&&adj[x][i]!=MAX){//no vis can reach
			if(dis[x]+adj[x][i]<dis[i]){//find shorter distane 
				dis[i]=dis[x]+adj[x][i];
			}
		}
	}
	int small=MAX,smalldis=MAX;
	for(int i=0;i<n;i++){//find smallest be next node
		if(vis[i]==0&&dis[i]<smalldis){
			small=i;
			smalldis=dis[i];
		}
	}
	if(small!=MAX){
		djs(small);
	}
	
	return;
}
int main(){
	int cases,N;
	cin>>cases;
	N=cases;
	while(cases--){
		cin>>n>>m>>S>>T;
		
		memset(vis,0,sizeof(vis));
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)adj[i][j]=0;
				 else adj[i][j]=MAX;
				}
			}
			
		for(int i=0;i<m;i++){
			cin>>a>>b>>c;
				if(adj[a][b]>c){
					adj[a][b]=c;
					adj[b][a]=c;
				}
		}//adjacent matrix
		
		for(int i=0;i<n;i++){
			dis[i]=MAX;
		}
		
		
		dis[S]=0;//innitialize distanse
		
		
		djs(S);
		
		/*for(int i=0;i<n;i++){
			cout<<dis[i]<<" ";
		}*/
		
		if(dis[T]==MAX){
			cout<<"Case #"<<N-cases<<": unreachable"<<endl;
		}
		else{
			cout<<"Case #"<<N-cases<<": "<<dis[T]<<endl;
		}
		
	}
	
	return 0;
	
}
/*5 5 0 4
0 1 3
1 0 2
1 0 1
0 1 4
1 4 1000
Case #24: 1001*/

#include <bits/stdc++.h>
using namespace std;


int maps[105][105],dis[105];

void BFS(int s,int n){
    queue <int> q;
    q.push(s);
    while(!q.empty()){
        int cur=q.front();
        for(int i=1;i<=n;i++){
            if( maps[cur][i] && dis[cur]+1 > dis[i] ){
                dis[i]=dis[cur]+1;
                q.push(i);
            }
        }
         q.pop();
    }
    
}

int main(){
    int n,s,p,q,t=1;
    while( cin>>n && n ){
        int ans=-1,ansind;
        memset(maps,0,sizeof(maps));
        memset(dis,0,sizeof(dis));
        cin>>s;
        while(cin>>p>>q && p+q){
            maps[p][q]=1;
        }
        BFS(s,n);
        for(int i=1;i<=n;i++){
        if(dis[i] > ans ||  ( dis[i]==ans && i < ansind)){
            ans=dis[i];
            ansind=i;
         }
        }
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",t++,s,ans,ansind);
    }
    
}

 
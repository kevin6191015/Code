#include <bits/stdc++.h>
using namespace std;
int Move[8][2]={2,1,2,-1,1,2,1,-2,-1,2,-1,-2,-2,-1,-2,1};
int vis[8][8]={0};

struct Step{
	int x,y,step;
};

int BFS(int x1,int y1,int x2,int y2){
    if(x1==x2&&y1==y2){return 0;}
    queue <Step> q;
    Step step1;
    step1.x=x1;
    step1.y=y1;
    step1.step=0;
    q.push(step1);
    vis[x1][y1] = 1;
    while(!q.empty()){
        for(int i=0;i<8;i++){
            Step step2;
            step2.step=q.front().step+1;
            step2.x=q.front().x+Move[i][0];
            step2.y=q.front().y+Move[i][1];
            if(step2.x==x2&&step2.y==y2){
                vis[step2.x][step2.y]=1;
                return step2.step;
            }
            if(step2.y>7||step2.x>7||step2.y<1||step2.x<1||vis[step2.x][step2.y]==1){
                continue;
            }else{
                vis[step2.x][step2.y]=1;
                q.push(step2);
            }
        }
        q.pop();
    }
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<BFS(str1[0]-'a'+1,str1[1]-'0',str2[0]-'a'+1,str2[1]-'0')<<endl;
}
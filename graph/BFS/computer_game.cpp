#include <bits/stdc++.h>
using namespace std;
int COL;

bool isSafe(int COL, int row , int  col){
    return (row>=0)&&(col>=0)&&(row<2)&&(col<COL);
}

void DFS(int M[2][101],bool visited[2][101],int col,int row){
        int move[8][2]={{-1,1},{-1,0},{-1,-1},{0,1},{0,-1},{1,1},{1,0},{1,-1} };
        for(int i=0; i<8; i++){
            int newx = col + move[i][1];
            int newy= row + move[i][0];
            if(isSafe(COL, newx, newy) && !visited[newx][newy]&& M[newx][newy] == 0 ){
                visited[newx][newy]=true;
                DFS(M,visited,newx,newy);
            }
        }
}


int main(){
    int cases;
    bool ans;
    bool visited[2][101];
    int board[2][101];
    string input;
    cin >> cases;
    while(cases--){
        cin >> COL;
        for(int i=0; i<2; i++){
            for(int j=0; j<101; j++){
                board[i][j] = -1;
            }
        }   
        for(int i=0; i<2; i++){
            cin >> input;
            for(int j=0; j<COL; j++){
                board[i][j] = (int)input[j] - '0';
            }
        }
        memset(visited,false,sizeof(visited));
        visited[0][0]=true;
        DFS(board, visited, 0, 0);
        /*for(int i=0; i<2; i++){
            for(int j=0; j<COL; j++){
                cout<< visited[i][j] << " ";
            }
            cout<<endl;
        }*/
        if(visited[1][COL-1]==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
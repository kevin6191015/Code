#include <bits/stdc++.h>
using namespace std;
#define ROW 5
#define COL 5

bool isSafe(int row , int col){
    return (row>=0)&&(col>=0)&&(row<ROW)&&(col<COL);
}

void DFS(int M[ROW][COL],int row,int col,bool visited[ROW][COL]){
        int move[8][2]={ {-1,1},{-1,0},{-1,-1},{0,1},{0,-1},{1,1},{1,0},{1,-1} };
        
        for(int i=0;i<8;i++){
            int newx=row+move[i][0];
            int newy=col+move[i][1];
            if(isSafe(newx,newy)&&!visited[newx][newy]&&M[newx][newy]){
                visited[newx][newy]=true;
                DFS(M,newx,newy,visited);
            }
        }
}


int countIslands(int M[ROW][COL]){
    int count=0;
    bool visited[ROW][COL];

    memset(visited,false,sizeof(visited));
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            if(!visited[i][j]&&M[i][j]){
                DFS(M,i,j,visited);
                count++;
            }
        }
    }
    return count;

}  


int main()
{
    int M[ROW][COL] = { { 1, 1, 0, 0, 0 },
                        { 0, 1, 0, 0, 1 },
                        { 1, 0, 0, 1, 1 },
                        { 0, 1, 0, 1, 0 },
                        { 1, 0, 1, 0, 1 } };

 
    cout << "Number of islands is: " << countIslands(M);
 
    return 0;
}
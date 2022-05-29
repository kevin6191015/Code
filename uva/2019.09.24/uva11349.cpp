#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,N,ca=1;
    char ch1,ch2;
    cin>>num;
    while(num--){
        cout<<"Test #"<<ca++<<": ";
        cin>>ch1>>ch2>>N;
        float matrix[N][N],ans=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>matrix[i][j];
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                    if(matrix[i][j]<0){
                        ans=1;
                    }
                    if(matrix[i][j]!=matrix[N-1-i][N-1-j]){
                        ans=1;
                    }
            }
        }
        if(ans)cout<<"Non-symmetric."<<endl;
        else cout<<"Symmetric."<<endl;
    }
}

/*
(0,0) (0,1) (0,2) (0,3)
(1,0) (1,1) (1,2) (1,3)
(2,0) (2,1) (2,2) (2,3)
(3,0) (3,1) (3,2) (3,3)


*/
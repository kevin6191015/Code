#include <bits/stdc++.h>
using namespace std;

int num,bingo[5][5],card[75],ans;
bool result[5][5];
int row,col;

bool iscontain(int num){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(bingo[i][j]==num){
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}

bool checkrow(){
    for(int i=0;i<5;i++){
        if(!result[i][col])return false;
    }
    return true;
}

bool checkcol(){
    for(int j=0;j<5;j++){
        if(!result[row][j])return false;
    }
    return true;
}

bool checkdi1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                if(!result[i][j])return false;
            }
        }
     }
     
     return true;
}

bool checkdi2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j==4){
                if(!result[i][j])return false;
            }
        }
     }
     return true;
}

int main(){

    cin>>num;
    while(num--){
        memset(result,false,sizeof(result));
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(i==2&&j==2)continue;
                cin>>bingo[i][j];
            }
        }
        bingo[2][2]=0;
        result[2][2]=true;
        for(int i=0;i<75;i++){
            cin>>card[i];
        }
        for(int i=0;i<75;i++){
            if(iscontain(card[i])){
                result[row][col]=true;
                if(checkrow()||checkcol()){
                    ans=i+1;
                    break;
                }
                if(row==col){
                    if(checkdi1()){
                        ans=i+1;
                        break;
                    }
                }
                if(row+col==4){
                    if(checkdi2()){
                        ans=i+1;
                        break;
                    }
                }
            }
        }
        cout<<"BINGO after "<<ans<<" numbers announced"<<endl;
    }
}
/*
(0,0) (0,1) (0,2) (0,3) (0,4)
(1,0) (1,1) (1,2) (1,3) (1,4)
(2,0) (2,1) (2,2) (2,3) (2,4)
(3,0) (3,1) (3,2) (3,3) (3,4)
(4,0) (4,1) (4,2) (4,3) (4,4)



*/
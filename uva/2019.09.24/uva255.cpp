#include <bits/stdc++.h>
using namespace std;

int check[8][8];
int k,q,n,X1,Y1,X2,Y2,X3,Y3;

void getcord(int a,int b,int c){
    X1=a/8;Y1=a%8;
    X2=b/8;Y2=b%8;
    X3=c/8;Y3=c%8;
}

bool kmove(int X1,int Y1){
    bool ans=false;
    if(X1!=0){
        if(check[X1-1][Y1]==0&&X1-1!=X3)  ans=true;
    }
    if(X1!=7){
        if(check[X1+1][Y1]==0&&X1+1!=X3) ans=true;
    }
    if(Y1!=0){
       if( check[X1][Y1-1]==0&&Y1-1!=Y3)  ans=true;
    }
    if(Y1!=7){
        if(check[X1][Y1+1]==0&&Y1+1!=Y3)  ans=true;
    }
    return ans;
}



void avamove(int X1,int Y1,int X2,int Y2){
    for(int i=0;i<8;i++){
        check[i][Y2]=1;
    }
    for(int i=0;i<8;i++){
        check[X2][i]=1;
    }
    if(X1!=0){
        if(check[X1-1][Y1]==1)check[X1-1][Y1]=2;
        else check[X1-1][Y1]=0;
    }
    if(X1!=7){
        if(check[X1+1][Y1]==1)check[X1+1][Y1]=2;
        else check[X1+1][Y1]=0;
    }
    if(Y1!=0){
        if(check[X1][Y1-1]==1)check[X1][Y1-1]=2;
        else check[X1][Y1-1]=0;
    }
    if(Y1!=7){
        if(check[X1][Y1+1]==1)check[X1][Y1+1]=2;
        else check[X1][Y1+1]=0;
    }
    if(X1==X2){
        if(Y1<Y2){
            for(int i=0;i<Y1;i++){
                check[X1][i]=false;
            }
        }else{
            for(int i=7;i>Y1;i--){
                check[X1][i]=false;
            }
        }
    }
    if(Y1==Y2){
        if(X1<X2){
            for(int i=0;i<X1;i++){
                check[i][Y1]=false;  
            }
        }else{
            for(int i=7;i>X1;i--){
                check[i][Y1]=false;
            }
        }
    }
    check[X1][Y1]=0;
    check[X2][Y2]=0;
}

int main(){
    
    while(cin>>k>>q>>n){
        memset(check,false,sizeof(check));
        if(k==q){ cout<<"Illegal state"<<endl; continue;}
        getcord(k,q,n);
        avamove(X1,Y1,X2,Y2);
        /*for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<check[i][j]<<" ";
            }
            cout<<endl;
        }*/
        if(check[X3][Y3]==0) { cout<<"Illegal move"<<endl; continue; }
        if(check[X3][Y3]==2) { cout<<"Move not allowed"<<endl; continue;}
        memset(check,false,sizeof(check));
        avamove(X1,Y1,X3,Y3);
        
        if(kmove(X1,Y1)) { cout<<"Continue"<<endl; continue; }
        else cout<<"Stop"<<endl;
    }
}

/*
(0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7)
(1,0) (1,1) (1,2) (1,3) (1,4) (1,5) (1,6) (1,7)
(2,0) (2,1) (2,2) (2,3) (2,4) (2,5) (2,6) (2,7)
(3,0) (3,1) (3,2) (3,3) (3,4) (3,5) (3,6) (3,7)
(4,0) (4,1) (4,2) (4,3) (4,4) (4,5) (4,6) (4,7)
(5,0) (5,1) (5,2) (5,3) (5,4) (5,5) (5,6) (5,7)
(6,0) (6,1) (6,2) (6,3) (6,4) (6,5) (6,6) (6,7)
(7,0) (7,1) (7,2) (7,3) (7,4) (7,5) (7,6) (7,7)

*/
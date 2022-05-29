#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    while(a!=0&&b!=0){
        int temp=a;
        a=b%a;
        b=temp%b;
    }
    if(a==0){
        return b;
    }else{
        return a;
    }
    
}


int main(){
    int N;
    while(cin>>N){
        if(N==0)break;
        long long G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }

}

/*

15  20
5   15
0    5

*/
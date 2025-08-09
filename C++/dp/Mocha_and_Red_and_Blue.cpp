#include <bits/stdc++.h>
using namespace std;
char square[101];

bool check(char square[101],int num){
    for(int i=0;i<num;i++){
        if(square[i]=='?')
        return true;
    }
    return false;
}

int main(){
    int cases,num,index=-1;
    cin >> cases;
    while(cases--){
        cin >> num;
        for(int i=0; i<num; i++){
            cin >> square[i];
        }
        for(int i=0; i<num; i++){
            if(square[i]=='B'||square[i]=='R'){
                index=i;
                break;
            }else{
                index=-1;
            }
        }
        if(index == -1){
            for(int i=0;i<num;i++){
                if(i%2==0)square[i]='R';
                else square[i]='B';
            }
        }else{
            while(check(square,num)){
                for(int i=index;i>0;i--){
                    if(square[i]=='R'&&square[i-1]=='?'){
                        square[i-1]='B';
                    }else if(square[i]=='B'&&square[i-1]=='?'){
                        square[i-1]='R';
                    }
                }
                for(int i=index+1; i<num; i++){
                    if(square[i]=='B'||square[i]=='R'){
                        index=i;
                        break;
                    }else{
                        for(int i=index;i<num+1;i++){
                            if(square[i]=='R'&&square[i+1]=='?'){
                                square[i+1]='B';
                            }else if(square[i]=='B'&&square[i+1]=='?'){
                                square[i+1]='R';
                            }
                        }
                    }
                }
            }
        }
        for(int i=0;i<num;i++){
            cout<<square[i];
        }
        cout<<endl;
    }
}
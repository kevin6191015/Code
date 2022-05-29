#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,ca=1,ans;
    while(cin>>a>>b){
        if(a==0&&b==0)break;
        char input[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>input[i][j];
            }
        }
        cout<<"Field #"<<ca++<<":"<<endl;
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                ans=0;
                if(input[i][j]=='*'){
                    cout<<"*";
                }else{
                    if(input[i-1][j]=='*'&&i>0) ans++;
                    if(input[i+1][j]=='*'&&i<b) ans++;
                    if(input[i][j+1]=='*'&&j<a) ans++;
                    if(input[i][j-1]=='*'&&j>0) ans++;
                    if(input[i+1][j+1]=='*'&&i<b&&j<a)ans++;
                    if(input[i+1][j-1]=='*'&&i<b&&j>0)ans++;
                    if(input[i-1][j+1]=='*'&&i>0&&j<a)ans++;
                    if(input[i-1][j-1]=='*'&&i>0&&j>0)ans++;

                    cout<<ans;
                }

            }
            cout<<endl;
        }
        cout<<endl;

    }
   
}
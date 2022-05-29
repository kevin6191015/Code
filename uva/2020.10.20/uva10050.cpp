#include <bits/stdc++.h>
using namespace std;

int main(){
    int cas,day,num;
    cin>>cas;
    while(cas--){
        cin>>day;
        bool check[day+1];
        memset(check,false,sizeof(check));
        cin>>num;
        int hartal[num+1],ans=0;
        //for(int i=6;i<=day;i+=6) check[i]=false;
        //for(int i=7;i<=day;i+=7) check[i]=false;
        for(int i=1;i<=num;i++){
            cin>>hartal[i];
        }
        for(int i=1;i<=num;i++){
            for(int j=1;j<=day;j++){
                if(j%hartal[i]==0)check[j]=true;
            }
        }
        for(int i=6;i<=day;i+=7)check[i]=false;
        for(int i=7;i<=day;i+=7)check[i]=false;
        for(int i=1;i<=day;i++){
            if(check[i]) ans++;
            //cout<<check[i]<<" ";
        }
        cout<<ans<<endl;
    }
}

/*
2
14
3
3
4
8
100
4
12
15
25
40

*/
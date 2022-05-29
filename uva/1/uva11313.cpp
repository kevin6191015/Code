#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,m,n;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>n;
        cin>>m;
        if((n-m)%(m-1)!=0)cout<<"cannot do this"<<endl;
        else cout<<(n-m)/(m-1)+1<<endl;

    }
}
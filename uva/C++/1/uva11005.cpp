#include <bits/stdc++.h>
using namespace std;

int ans[37],cost[37];
long long s,Min;

void convert(long long s,int base){
    Min=1e9;
    while(s>0){
        int temp=s%base;
        ans[base]+=cost[temp];
        s/=base;
    }
    for(int i=2;i<=36;i++){
        if(ans[i]<Min){
            Min=ans[i];
        }
    }
}

int main(){
    int cases,num,n;
    
    cin>>cases;
    n=cases;
    while(cases--){
        cout<<"Case "<<n-cases<<":"<<endl;
        for(int i=0;i<36;i++){
            cin>>cost[i];
        }
        cin>>num;
        while(num--){
            memset(ans,0,sizeof(ans));
            cin>>s;
            cout << "Cheapest base(s) for number " << s << ":";
            for(int i=2;i<=36;i++){
                convert(s,i);
            }
            for(int i=2;i<=36;i++){
                if(ans[i]==Min||ans[i]==0){
                    cout<<" "<<i;
                }
             }
            cout<<endl;
        }
        if(cases!=0){
            cout<<endl;
        }
    }
}
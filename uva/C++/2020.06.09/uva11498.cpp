#include <bits/stdc++.h>
using namespace std;
int main(){
    int ca,a,b,ans;
    map<char,int>count;
    cin>>ca;
    while(ca--){
        ans=0;
        cin>>a>>b;
        char DNA[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>DNA[i][j];
            }
        }
        for(int j=0;j<b;j++){
            count.clear();
            for(int i=0;i<a;i++){
                if(count.find(DNA[i][j])!=count.end()){
                    auto l=count.find(DNA[i][j]);
                    (l->second)++;
                }else{
                    count.insert(make_pair(DNA[i][j],1));
                }
            }
            int max=0;
            char temp;
            for(auto &k :count){
                if(k.second>max){
                    temp=k.first;
                    max=k.second;
                }
            }
            cout<<temp;
            ans+=(a-max);
        }
        cout<<endl<<ans<<endl;
    }
}
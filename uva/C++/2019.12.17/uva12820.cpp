#include <bits/stdc++.h>
using namespace std;

map <char,int> cool;

int main(){
    int num,check[10001],ans,ca=1;
    char temp;
    bool co;
    while(cin>>num){
            cin.ignore();
            ans=0;
            while(num--){
                memset(check,0,sizeof(check));
                cool.clear();
                co=true;
                while(cin.get(temp)){
                    if(temp=='\n')break;
                     cout<<temp<<endl;
                    if(cool.find(temp)!=cool.end()){
                        auto i = cool.find(temp);
                        (i->second)++;
                    }else{
                        cool.insert(make_pair(temp,1));
                    }
                }
                for(auto &i :cool){
                    cout<<i.first<<" : "<<i.second<<endl;
                    if(check[i.second]==1) {co=false; break;}
                    else check[i.second]=1;
                }
                if(cool.size()==1)co=false;
                if(co) ans++;
            }
        cout<<"Case "<<ca++<<": "<<ans<<endl;
    }

}

/*

4
adfks
kkdk
kskfgdldddd
sls


*/
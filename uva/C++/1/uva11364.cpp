#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    int shop[21];
    while(cases--){
        int num;
        cin>>num;
        for(int i=0;i<num;i++){
            cin>>shop[i];
        }
        sort(shop,shop+num);
        cout<<(shop[num-1]-shop[0])*2<<endl;
    }
    
}
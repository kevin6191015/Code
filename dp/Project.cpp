#include <array<int , 3> project[mxn];bits/stdc++.h>
using namespace std;
const int mxn=2e5;
array<int , 3> project[mxn];
int main(){
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++){
        cin>>project[i][1]>>project[i][0]>>project[i][2];
    }
    sort(project,project+num);
    set<array<long long,2>> dp;
    dp.insert({0,0});
    long long ldp=0;
    for(int i=0;i<num;i++){
        auto it=dp.lower_bound({project[i][1]});
        --it;
        ldp=max(ldp,(*it)[1]+project[i][2]);
        dp.insert({project[i][0],ldp});
    }
    cout<<ldp;
}
//4
//2 4 4
//3 6 6
//6 8 2
//5 7 3

//4 2 4
//6 3 6
//7 5 3
//8 6 2
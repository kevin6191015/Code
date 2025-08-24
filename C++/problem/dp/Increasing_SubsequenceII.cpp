#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,temp;
    cin>>num;
    vector<int> v;
    while(num--){
        cin>>temp;
        auto it=lower_bound(begin(v),end(v),temp);
        if(it==end(v))v.push_back(temp);
        else *it=temp;
    }
    cout<<v.size();
    return 0;
}//O(n*log(n))
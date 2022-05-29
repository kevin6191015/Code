#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,x;
    set<int> s;
    queue<int> q;
    cin >>n;
    while (n--){
        cin >>x;
        for (auto i=s.begin();i!=s.end();i++) q.push(*i+x);
        while (!q.empty()){
            s.insert(q.front());
            q.pop();
        }
        s.insert(x);
    }
    cout <<s.size() <<endl;
    for (auto i=s.begin();i!=s.end();i++) cout <<*i <<' ';

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,temp;
    set <int> a,b,c;
    while(cin>>A>>B){
        a.clear();
        b.clear();
        c.clear();
        if(A==0&&B==0){
            break;
        }
        for(int i=0;i<A;i++){
            cin>>temp;
            a.insert(temp);
            c.insert(temp);
        }
        for(int i=0;i<B;i++){
            cin>>temp;
            b.insert(temp);
        }

        for(auto &i : c){
            if(b.count(i)){
                b.erase(i);
                a.erase(i);
            }
        }
        cout<<min(a.size(),b.size())<<endl;

    }
}
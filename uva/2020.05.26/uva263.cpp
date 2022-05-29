#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    string s;
    long long int a,b;
    int ans;
    set<int>check;
    while(getline(cin,s)){
        if(s=="0")break;
        cout<<"Original number was "<<s<<endl;
        check.clear();
        ans=1;
        while(1){
            sort(s.begin(),s.end(),cmp);
            stringstream ss1(s);
            ss1>>a;
            cout<<a<<" - ";
            sort(s.begin(),s.end());
            stringstream ss2(s);
            ss2>>b;
            cout<<b<<" = "<<a-b<<endl;
           
            if(check.count(a-b)) break;
            check.insert(a-b);
            stringstream ss3;
            ss3<<a-b;
            ss3>>s;
            ans++;
        }
        cout<<"Chain length "<<ans<<endl<<endl;

    }

}
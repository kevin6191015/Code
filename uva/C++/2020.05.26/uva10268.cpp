#include <bits/stdc++.h>
using namespace std;
int main(){

    int num,b,ans,tmp;
    char temp;
    vector<int> a;
    while(cin>>num){
        a.clear();
        ans=0;
        
        while(cin>>b){
            temp=getchar();
            a.push_back(b);
            if(temp=='\n')break;
        }
        for(int i=0;i<a.size()/2;i++){
            swap(a[i],a[a.size()-1-i]);
        }
        for(int i=0;i<a.size();i++){
            a[i]=a[i]*i;
        }
        tmp=1;
        for(int i=1;i<a.size();i++){
            ans+=a[i]*tmp;
            tmp*=num;
        }

        /*for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }*/
        
        cout<<ans<<endl;
    }
}
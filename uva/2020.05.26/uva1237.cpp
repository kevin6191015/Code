#include <bits/stdc++.h>
using namespace std;

int main(){
    int cas;
    cin>>cas;
    while(cas--){
        int num1,num2;
        cin>>num1;
        string type[num1],ans_str;
        long long low[num1],high[num1],input,ans;
        for(int i=0;i<num1;i++){
            cin>>type[i]>>low[i]>>high[i];
        }
        cin>>num2;
        for(int i=0;i<num2;i++){
            ans=0;
            cin>>input;
            for(int j=0;j<num1;j++){
                if(input>=low[j]&&input<=high[j]){
                    ans++;
                    ans_str=type[j];
                }
            }
            if(ans==1)cout<<ans_str<<endl;
            else cout<<"UNDETERMINED"<<endl;
        }
        if(cas)cout<<endl;
    }
}
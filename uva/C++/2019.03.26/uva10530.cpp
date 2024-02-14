#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num[11],ans;
    while(cin>>n){
        if(n==0)break;
        memset(num,0,sizeof(num));
        ans=0;
        string s1,s2;
        cin>>s1>>s2;
        while(s1[0]!='r'){
            if(ans!=1){
                    if(s2[0]=='h'){
                        for(int i=n;i<11;i++){
                            if(num[i]==-1){
                                ans=-1; 
                            }else{
                                num[i]=1; 
                            }
                                            
                         }
                }else{
                    for(int i=n;i>0;i--){
                        if(num[i]==1){
                           ans=-1;
                        }else{
                            num[i]=-1; 
                        }
                        
                    }
                }
            }
            cin>>n;
            cin>>s1>>s2;
        }
        if(ans==0&&num[n]==0){
            cout<<"Stan may be honest"<<endl;
        }else{
            cout<<"Stan is dishonest"<<endl;
        }
    }
        
}
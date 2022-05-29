#include <bits/stdc++.h>
using namespace std;
int main(){
	 int num,a;
     cin>>num;
     while(num--){
        cin>>a;
        int b[a],ans=0;
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        for(int i=0;i<1000;i++){
            int temp=b[0];
            for(int i=0;i<a-1;i++){
                b[i]=abs(b[i]-b[i+1]);
            }
            b[a-1]=abs(b[a-1]-temp);
        }
        for(int i=0;i<a;i++){
            if(b[i]!=0){
                ans=1;
            }
        }
        if(ans==0)cout<<"ZERO"<<endl;
        else cout<<"LOOP"<<endl;
        
     }
}
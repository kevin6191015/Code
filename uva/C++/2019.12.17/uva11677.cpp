#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,ans;
    while(cin>>a>>b>>c>>d){
        if(a+b+c+d==0) break;
        if(a<c){
            if(b>=d){
                ans=(c-a)*60+d-b;
            }else{
                ans=(c-a-1)*60+(60-b+d);
            }
        }else if(a>c){
            if(a>12&&c<12){
            	if(b>=d){
                 	ans=720-((a-c-12)*60+b-d);
                }else{
                	ans=720-((a-12-c-1)*60+(60+b-d));
                }
            }else {
               if(b>=d){
               		ans=1440-((a-c)*60+(b-d));
               }else{
               		ans=1440 - ((a-c-1)*60+60-d+b);
               }
            }
        }else{
        	if(b>d)ans=1440-(a-c)*60-(b-d);
        	else ans=d-b;
        
        }
        cout<<ans<<endl;
    }
}
/*
1 10 3 20
3 20 1 10  1330
3 10 1 20  

*/
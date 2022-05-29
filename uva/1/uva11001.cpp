#include <bits/stdc++.h>
using namespace std;
int main(){
    int v0,v1;
    while(cin>>v1>>v0&&v0+v1){
        double Max=0;
        int count=0;
        for(int i=1;i<=v1;i++){
            if(v1/i-v0<0)break;// 小於 0 不能開根號
            
            double sum = 0.3*sqrt((double)v1/i - v0)*i;

            if(fabs(Max - sum) <= 1e-10){// sum 有多種可能 output 為 0
                count = 0;
                break;
            }else if(Max<sum){
                Max=sum;
                count=i;
            }
        }
        cout<<count<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;


int numsum(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main(){
    int num,a;
    cin>>num;
    while(num--){
        int digitnum=0,temp=0,ans=0;
        cin>>a;
        temp=a;
        while(temp!=0){
            digitnum++;
            temp/=10;
        }
        for(int i=a-9*digitnum;i<a;i++){
            //cout<<"i : "<<i<<"  "<<"numsum : "<<numsum(i)<<endl;
            if(i+numsum(i)==a){
                ans=i;
                break;
            }
        }
        if(ans==0){
            cout<<"0"<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
}

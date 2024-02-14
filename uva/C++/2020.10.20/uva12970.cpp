#include <bits/stdc++.h>
using namespace std;

long long  GCD(long long a,long long b){
    while(a!=0&&b!=0){
        if(a>=b)a=a%b;
        else b=b%a;
    }
    if(a)return a;
    else return b;

}

int main(){
    long long v1,d1,v2,d2,ca=1;
    while(cin>>v1>>d1>>v2>>d2){
        if(v1==0&&d1==0&&v2==0&&d2==0)break;
        long long t1=d1*v2;
        long long  t2=d2*v1;
        cout<<"Case #"<<ca++<<": ";
        if(t1>=t2)cout<<"No beer for the captain."<<endl;
        else cout<<"You owe me a beer!"<<endl;
        long long a=d1*v2+d2*v1;
        long long b=2*v1*v2;
        long long g=GCD(a,b);
        if(g==1)cout<<"Avg. arrival time: "<<a<<"/"<<b<<endl;
        else if(g!=1&&b/g==1)cout<<"Avg. arrival time: "<<a/g<<endl;
        else cout<<"Avg. arrival time: "<<a/g<<"/"<<b/g<<endl;
    }
}

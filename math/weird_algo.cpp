#include <bits/stdc++.h>
using namespace std;
int main(){
    long long num;
    cin>>num;
    cout<<num<<" ";
    while(num!=1){
        if(num%2==0){
            num=num/2;
        }else{
            num=num*3+1;
        }
        cout<<num<<" ";
    }
}
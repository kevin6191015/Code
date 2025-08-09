#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if(a<2)return false;
    for(int i=2;i*i<=a-1;i++){
        if(a%i==0)return true;
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    if(isPrime(a))cout<<a<<" is a prime number.";
    else cout<<a<<" is not a prime number.";
}

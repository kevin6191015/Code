#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,a,ca=1;
    char str;
    cin>>num;
    cin.ignore();
    while(num--){
        cout<<"Case "<<ca++<<": ";
        while(cin.get(str)){
            if(str=='\n'){
            cout<<endl;
                break;
            }
            cin>>a;
            while(a--){
                cout<<str;
            }
        }
      
    }
}
/*
3
A2B4D1A2
A12
A1B1C1D1*/
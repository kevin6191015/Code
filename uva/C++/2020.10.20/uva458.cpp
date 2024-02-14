#include <bits/stdc++.h>
using namespace std;


int main(){
    string str;
    char temp;
    while(getline(cin,str)){
            for(int i=0;i<str.length();i++){
                temp=str[i]+7;
                cout<<temp;
            }
            cout<<endl;
    }

}
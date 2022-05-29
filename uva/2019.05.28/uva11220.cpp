#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,ca=1;
    string line,temp;
    cin>>num;
    cin.ignore();
    cin.ignore();
    while(num--){
        cout<<"Case #"<<ca++<<":"<<endl;
        
        while(getline(cin,line)){
            int b=0;
            stringstream ss(line);
            if(line=="\0")break;
            for(;;){
                getline(ss,temp,' ');
                if(ss.fail())break;
                if(temp.length()>b){
                    cout<<temp[b++];
                }
                
            }
            cout<<endl;
        }
        if(num)
        cout<<endl;
        
    }
}
/*
2

Hey good lawyer
as I previously previewed
yam does a soup

First I give money to Teresa
after I inform dad of
your horrible soup
*/
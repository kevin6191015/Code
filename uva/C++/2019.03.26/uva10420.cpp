#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    string line,name;
    map<string,int> country;
    cin>>num;
    cin.ignore();
    while(num--){
        cin>>name;
        getline(cin,line);
        if(country.find(name)!=country.end()){
            auto i = country.find(name);
            (i->second)++;
        }else{
            country.insert(make_pair(name,1));
        }  
    }
    for(auto &i : country){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
/*3 
Spain Donna Elvira
England Jane Doe
Spain Donna Anna*/
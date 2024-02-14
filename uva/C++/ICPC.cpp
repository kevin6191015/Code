#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct input{
    int first;
    int second;
    int third;
    string name;
};

bool compare( input a, input b){
	if(a.first > b.first){
        return 1;
    }else if(a.first == b.first){
        if(a.second>b.second){
            return 1;
         }else if(a.second == b.second){
              if(a.third>b.third){
                    return 1;
              }else{
                  return 0;
              }
         }else{
             return 0;
         }
    }else{
        return 0;    
    }   
}



int main(){
    int cases;
    cin>>cases;
    input s_array[cases];
    for(int i=0;i<cases;i++){
        cin>>s_array[i].first>>s_array[i].second>>s_array[i].third;
        cin.ignore();
        getline(cin,s_array[i].name);
    }
    
    sort(s_array,s_array+cases,compare);
    cout<<s_array[0].name;
    return 0;
}
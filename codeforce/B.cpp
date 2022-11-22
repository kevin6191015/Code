#include <bits/stdc++.h>
using namespace std;
  
int main(){
    
    int cases,num;
    cin>>cases;
    while(cases--){
        cin>>num;
        vector<int> p ;
        for(int i=1 ;i<=num;i++){
            p.push_back(i);
        }
        for(int i= num & 1;i<num-2;i+=2){
            swap(p[i],p[i+1]);
        }
        for(int i=0;i<num;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
     
}


//4
//2 1 3 4      1 2 3 4 
//5
//1 3 2 4 5   1 2 3 4 5       
//6
//2 1 4 3 5 6  1 2 3 4  5 6
//7
//1 3 2 5 4 6 7
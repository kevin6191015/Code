#include <bits/stdc++.h>
using namespace std;

int conversion10(string a,int base){
    int ans=0;
    int temp=1;
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]>='0'&&a[i]<='9'){
            ans+=(a[i]-'0')*temp;
            temp*=base;
        }else{
            ans+=(a[i]-'A'+10)*temp;
            temp*=base;
        }
            
    }
    return ans;
}

void convert(long b,int base){
    vector <int> a;
    string temp1;
    while(b!=0){
        a.push_back(b%base);
        b/=base;
    }
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]>=0&&a[i]<=9){
            temp1.push_back(a[i]+'0');
        }else{
            char temp='A'+a[i]-10;
            temp1.push_back(temp);
        }
        
    }
    if(temp1.size()<8){
        for(int i=7-temp1.size();i>0;i--){
            cout<<"0";
        }
        cout<<temp1;
    }else{
        for(int i=temp1.size()-7;i<temp1.size();i++){
            cout<<temp1[i];
        }
    }
    cout<<endl;
}
/*
10->A
11->B
*/
int main(){
    string str;
    int a,b;
    while(cin>>str>>a>>b){
        convert(conversion10(str,a),b);
    }

}

/*
1111000 2 10
1111000 2 16
2102101 3 10
2102101 3 15
12312 4 2
1A 15 2
ABCD 16 15
03 13 10

*/
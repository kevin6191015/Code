#include <bits/stdc++.h>
using namespace std;
int main(){
    double s,a;
    double ans1,ans2;
    string str;
    while(cin>>s>>a>>str){
        double PI = atan(1)*4;
        
        if(str=="min"){
            a/=60;
        }

        a=fmod(a,360);

        if(a>180){
            a=360-a;
        }

        ans1=(s+6440)*2*PI*(a/360);
        ans2=sin(a/180*PI/2)*(s+6440)*2;
        printf("%.6lf %.6lf\n",ans1,ans2);
    }
}

/*500 30 deg
700 60 min
200 45 deg*/
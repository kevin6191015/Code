#include <bits/stdc++.h>
using namespace std;
int press[14][11]={0,0,1,1,1,0,0,1,1,1,1,
                   0,0,1,1,1,0,0,1,1,1,0,
                   0,0,1,1,1,0,0,1,1,0,0,
                   0,0,1,1,1,0,0,1,0,0,0,
                   0,0,1,1,1,0,0,0,0,0,0,
                   0,0,1,1,0,0,0,0,0,0,0,
                   0,0,1,0,0,0,0,0,0,0,0,
                   0,0,0,1,0,0,0,0,0,0,0,
                   0,1,1,1,1,0,0,1,1,1,0,
                   0,1,1,1,1,0,0,1,1,0,0,
                   0,1,1,1,1,0,0,1,0,0,0,
                   0,1,1,1,1,0,0,0,0,0,0,
                   0,1,1,1,0,0,0,0,0,0,0,
                   0,1,1,0,0,0,0,0,0,0,0,
                   };
map<char,int> convert;

int main(){
    convert.insert(make_pair('c',0));
    convert.insert(make_pair('d',1));
    convert.insert(make_pair('e',2));
    convert.insert(make_pair('f',3));
    convert.insert(make_pair('g',4));
    convert.insert(make_pair('a',5));
    convert.insert(make_pair('b',6));
    convert.insert(make_pair('C',7));
    convert.insert(make_pair('D',8));
    convert.insert(make_pair('E',9));
    convert.insert(make_pair('F',10));
    convert.insert(make_pair('G',11));
    convert.insert(make_pair('A',12));
    convert.insert(make_pair('B',13));

    int cases;
    cin>>cases;
    cin.ignore();
    string song;

    while(cases--){
        getline(cin,song);
        int count[11]={0};
        int current[11]={0};
        for(int i=0;i<song.length();i++){
            for(int j=1;j<=10;j++){
                if(press[convert.find(song[i])->second][j]==1&&current[j]==0){
                    count[j]++;
                    current[j]=1;
                }else if(press[convert.find(song[i])->second][j]==0&&current[j]==1){
                    current[j]=0;
                }
            }
        }
        for (int j = 1; j <= 10; j++){
            if (j != 1){
                cout << ' ';
            }
            cout << count[j];
        }
        cout<<endl;
    }

}


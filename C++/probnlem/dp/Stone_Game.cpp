#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, num;
    cin >> cases;
    for(int i=0; i < cases; i++){
        cin >> num;
        int temp[num], ma = -1, mi = 100000 , max_index = 0, min_index = 0;
        for(int j=0; j < num; j++){
            cin >> temp[j];
            if(temp[j] > ma) { ma = temp[j]; max_index = j; }
            if(temp[j] < mi) { mi = temp[j]; min_index = j; }
        }

        int ans = min ({   max( max_index ,min_index ) + 1 
                        , max( num - max_index, num - min_index )
                        , min_index + 1 + num - max_index 
                        , max_index + 1 + num - min_index });
        cout << ans << endl;  
    }
}
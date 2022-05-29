#include <iostream>
using namespace std;

int main(){

    int l;

    cin >> l;
    int num[l]={0},count=0;

    for(int i=0;i<l;i++)
    {
            cin >> num[i];
    }

    for(int i=0;i<l;i++)
    {
        for(int t=0;t<l-i-1;t++)
        {
            if(num[t]>num[t+1])
            {
                swap(num[t],num[t+1]);
                count++;
            }
        }
    }
    cout <<count <<endl;

    return 0;

}
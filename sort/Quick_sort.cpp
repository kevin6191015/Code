#include <bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void QS(int *arr,int l,int r){
    //cout<<"Error";
    if(l<r){
        int i=l-1,j=r;
        int pivot=arr[r];
        while(i<j){
            do   i++;    while(arr[i]<pivot);
            do   j--;    while(arr[j]>pivot);
            if(i<j) Swap(&arr[i],&arr[j]);
        }
        Swap(&arr[r],&arr[i]);
        QS(arr,l,i-1);
        QS(arr,i+1,r);
    }
    
}


void Print(int *arr,int n){
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}

int main(){
    int num;
    cin>>num;
    int input[num];
    for(int i=0;i<num;i++){
        cin>>input[i];
    }
    QS(input,0,num-1);
    Print(input,num);
}
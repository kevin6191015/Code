#include <bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Print(int *arr,int n){
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << endl; 
}

void shiftdown(int *arr,int n,int i){
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(l<n&&arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n&&arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        Swap(&arr[i],&arr[largest]);
        shiftdown(arr,n,largest);
    }
    
}

void HS(int *arr,int n){
    for(int i=n/2-1;i>=0;i--){
        shiftdown(arr,n,i);
    }

    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        Swap(&arr[0], &arr[i]);
        // call max heapify on the reduced heap
        shiftdown(arr, i, 0);
    }
}




int main(){
    int num;
    cin>>num;
    int input[num];
    for(int i=0;i<num;i++){
        cin>>input[i];
    }
    HS(input,num);
    Print(input,num);
}
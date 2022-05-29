#include <bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int *arr,int low,int high){
    int i=low;//record pivot position
    int pivot=arr[low];
    for(int j=low+1;j<=high;j++){
        if(arr[j]<pivot){//> or < depend on i j relative position
            i++;
            Swap(&arr[i],&arr[j]);
         }
    }
    swap(arr[i],arr[low]);
    return i;
}

void QS(int *arr,int low,int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        QS(arr,low,pivot-1);
        QS(arr,pivot+1,high);
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
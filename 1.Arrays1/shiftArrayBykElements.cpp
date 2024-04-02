#include<iostream>
using namespace std;

void shiftArray(int arr[],int size, int k){
    int temp[k];
    for(int i=0 ; i<k; i++){
        temp[i] =arr[size-k+i]; 
        // cout<<temp[i]<<" ";
    }
    // cout<<endl;

    for(int i = size; i>=1; i--){
        arr[i] = arr[i - k];
        // cout<<arr[i]<<" ";
    }
    // cout<<endl;

    for(int i = 0; i<k; i++){
        arr[i] = temp[i];
        // cout<<arr[i]<<" ";
    }
    // cout<<endl;

    
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int k = 2;

    shiftArray(arr,size,k);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
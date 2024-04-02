#include<iostream>
using namespace std;

void pairPrint(int arr[], int size){
    for(int i =0; i< size; i++){
        for(int j =0; j< size; j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[]={10,20,30,40,50,60,70,80,90};
    int size = 9;

    pairPrint(arr,size);

    return 0;
}
#include<iostream>
using namespace std;

void sortNegativeAndPosative(int arr[], int size){
    int index = 0;
    int j = 0;

    for(int index = 0; index< size; index++){
        if(arr[index]<0){
            swap(arr[j],arr[index]);
            j++;
        }
    }
} 

int main(){
    int arr[] = {23,-7,12,-10,-1,40,60};
    int size = 7;

    sortNegativeAndPosative(arr,size);

    // Printing the array
    for(int i =0 ; i< size; i++){
        cout<<arr[i]<<" ";
    }
}
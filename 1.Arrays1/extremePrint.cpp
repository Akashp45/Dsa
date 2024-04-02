#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){

    int left = 0;
    int right = size -1;

    while(left<=right){
        if(left == right){
            cout<<arr[left]<<endl;
        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";   
        }
        left++;
        right--;
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    extremePrint(arr, size);
    return 0;
}
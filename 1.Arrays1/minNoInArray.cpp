#include<iostream>
#include<limits.h>
using namespace std;

int findMinimumNo(int arr[], int size){
    int minAns = INT_MAX;
    for(int i = 0; i<size ; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){
    cout<<INT_MIN<<endl;
    cout<<INT_MAX<<endl;

    int arr[] = {10,20,50,2,3,5,80,64,100,1};
    int size = 10;

    int minimum = findMinimumNo(arr,size);
    cout<<"Minimum no from array is: "<<minimum;
    return 0;
}
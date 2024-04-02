#include<iostream>
using namespace std;

int nearlySortedArray(int arr[], int size, int target){
    int s = 0;
    int e = size -1;
    int mid = s + (e -s)/2;

    while(s<= e){

        if(mid -1 >= 0 && arr[mid - 1] == target){
            return mid -1;
        }

        if(arr[mid] == target ){
            return mid;
        }

        if(mid+1 < size && arr[mid + 1] == target){
            return mid + 1;
        }

        if(target > arr[mid]){
            s =mid +2;
        }else{
            e = mid -2;
        }

        mid = s +(e -s)/2;
    }
    return -1;
}



int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int n =7;
    int target = 20;

    int targetIndex = nearlySortedArray(arr,n,target);

    if(targetIndex != -1){
        cout<<"Element Found At: "<< targetIndex<<endl;
    }else{
        cout<<"Element Not Found"<<endl;
    }

    return 0;
}
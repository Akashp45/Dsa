#include<iostream>
using namespace std;

int findMissingElement(int arr[], int size){
    int s = 0;
    int e = size-1;
    int ans = -1;
    int mid = s + (e -s)/2;

    while(s<=e){
        if(arr[mid] - mid == 1){
            s = mid + 1;
        }else{
            ans = mid;
            e = mid - 1;
        }
        mid = s + (e - s) / 2 ;
    }

    return ans + 1;
}

int main(){

    int arr[] = {1,2,3,4,6,7,8,9};
    int size = 8;

    int ans = findMissingElement(arr,size);

    cout <<" Missing Element is: "<<ans<<endl;

    return 0;
}
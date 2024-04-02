#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]== target){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = { 2,4,6,8,10};
    int target = 110;
    int n = 5;

    bool ans = linearSearch(arr,n,target);

    if(ans == 1){
        cout <<"Target Found!!";
    }else{
        cout<<"Target Not Found!!";
    }

    // bool flag = 0;

    // for(int i = 0; i<n; i++){
    //     if(arr[i] == target){
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag == 1){
    //     cout<<"Target Found";
    // }else{
    //     cout<<"Target Not Found";
    // }
    return 0;

}
#include<iostream>
using namespace std;

// void sort0And1(int arr[], int size){
//     int left = 0;
//     int right = size-1;

//     while(left<=right){
//         while(arr[left]==0){
//             left++;
//         }
//         while (arr[right]==1){
//             right--;
//         }

//         if(left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
//     }

//     for(int i =0; i< size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

void sortOneAndZero(int arr[],int size){
    int oneount = 0;
    int zeroCount = 0;

    for(int i =0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            oneount++;
        }
    }
    // for(int i =0; i<size; i++){
    //     if(i<zeroCount){
    //         arr[i] = 0;
    //     }
    //     else{
    //         arr[i]=1;
    //     }
    // }

    int index =0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while (oneount--)
    {
        arr[index]=1;
        index++;
    }
    

    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={0,1,0,1,1,0,0,0,0};
    int size = 9;

    // sort0And1(arr,size);
    sortOneAndZero(arr,size);
    return 0;
}
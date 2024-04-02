#include<iostream>
using namespace std;

int findUniqueElement(int arr[],int size){
    int ans = 0; // xor with 0 will always give corresponding value

    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[]={10,2,11,10,2,13,15,15,13};
    int size = 9;

    int ans= findUniqueElement(arr,size);
    cout<<"Unique Element is: "<<ans;
    return 0;
}
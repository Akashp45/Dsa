#include<iostream>
using namespace std;

void countZeroAndOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;
    for(int i = 0; i< size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }

    cout<<"No of 0's: "<<zeroCount<<endl;
    cout<<"No of 1's: "<<oneCount<<endl;

}

int main(){
    int arr[] = {0,0,0,1,1,1,0,0,1,1,1,1,0};
    int size = 13;
    countZeroAndOne(arr,size); 
    return 0;
}
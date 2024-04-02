#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e -s)/2;

    while(s<= e){

        // single element 
        if(s == e){
            return s;
        }

        if(mid %2 == 0){ // even index
            if(mid +1 < n && arr[mid] == arr[mid+1]){ // left part of ans 
                s = mid + 2;
            }else{ 
                // right part of ans or on the ans
                // if we do mid-1 then ans will be lost 
                // so we use e = mid
                e = mid; 
            }
        }else{ //odd index
            if(mid -1 >=0 && arr[mid-1] == arr[mid]){ //left side of ans
                s = mid + 1;
            }else{//right side of ans
                e = mid - 1;
            }
        }
        mid = s + (e-s) / 2; // forgot to update mid 
    }
    return -1;
}

int main(){
    int arr[]={2}; //{10,10,2,2,5,5,2,2,5,5,20,20,11,10,10};
    int n = 1; //15;

    int oddOccuringElement = findOddOccuringElement(arr,n);
    cout<<"Odd Occuring Element Is: "<<arr[oddOccuringElement]<<endl;

    return 0;
}
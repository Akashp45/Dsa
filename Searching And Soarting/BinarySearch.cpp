#include<iostream>
using namespace std;

BinarySearch(int arr[],int n, int target)
{
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;

    while(start<=end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }

        else if(target > arr[mid])
        {
            start=mid+1;
        }
        else if(target < arr[mid]){
            end = mid -1;
        }

        // catch --> Eveary time we have to calculate mid
        mid = (start + end) / 2;
    }

    // if element not in list
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size = 9;
    int target = 90;

    int ansIndex = BinarySearch(arr,size,target);

    if(ansIndex == -1)
    {
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found At "<<ansIndex<<" Index";
    }
     
    return 0;
}
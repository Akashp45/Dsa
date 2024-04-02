#include<iostream>
using namespace std;

int LastOccurence(int arr[],int size, int target)
{
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }

        mid = (start + end)/2;
    }

    return ans;
}

int main()
{
    int arr[]={10,20,30,30,30,30,30,40,50};
    int n = 9;
    int target = 30;

    int lo = LastOccurence(arr,n,target);

    if(lo == -1)
    {
        cout<<"Element is not present in array"<<endl;
    }
    else{
        cout<<"Element is present at "<<lo<<" index"<<endl;
    }
    return 0;
}